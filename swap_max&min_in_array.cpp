#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size){
    int i =0;
    int maxIndex = 0;
    int minIndex = 0;

    while(i < size){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }if(arr[i] < arr[minIndex]){
            minIndex = i;
        }

        i++;
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(){
    int nums[] =  {5,15,22,-1,-15,24,7,9,-11};
    int size = 9;

    swapMaxMin(nums, size);

    for(int i=0; i<size; i++){
        cout<< nums[i]<<" ";
    }

    return 0;
}