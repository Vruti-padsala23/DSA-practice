#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4,5,6,7,3,9,8,2,0};
    int sz = 9;
    int target = 3;
    
    cout<< linearSearch(arr, sz, target)<< endl;

}