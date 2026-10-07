#include <iostream>
using namespace std;
void print_array(int a[], int n){
    for(int i = 0 ; i<n;i++){
    cout<<a[i]<<" ";
}
}
void insertion_sort(int a[], int n ){
    for(int i = 1; i<n;i++ ){
        int key = a[i];
        int j= i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main(){
int a[5] = {9,55,22,6,3};
    cout<<"Original array : "<<endl;
    print_array(a,5);
    cout<<"\nSorted array : "<<endl;
    insertion_sort(a,5);
    print_array(a,5);

return 0;
}
