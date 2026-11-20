#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4,2,7,9,6,11,41,23,44};
    int sz = 9;
    
    reverseArray(arr, sz);

    for(int i = 0; i<sz; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
    
    return 0;
}