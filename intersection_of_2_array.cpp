#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int arr2[] = {4,5,6,9,10,11,7,23,12};

    int n1 = 9, n2 = 9;

    cout<<"Intersection of two array :";

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                cout<< arr1[i]<< " ";
                break;
            }    
        }
    }

    return 0;
}