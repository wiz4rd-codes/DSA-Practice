#include <iostream>
using namespace std;
int main(){

int a[5] = {8,7,9,11,1};
for(int i = 0 ; i < 4  ; i++){
    
int smaller_index = i;
    for(int j = i+1 ; j < 5 ; j++){
        if(a[smaller_index]> a[j]){
        smaller_index = j;
        
        }
    }
    int temp = a[i];
        a[i] = a[smaller_index];
        a[smaller_index] = temp;

}
for(int i = 0 ; i<5;i++){
    cout<<a[i]<<" ";
}
return 0;
}
