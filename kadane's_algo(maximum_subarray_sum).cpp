// Kadane's algorithm is an optimal dynamic programming algorithm used to solve the Maximum Subarray Sum 
// problem—finding the contiguous, non-empty subarray within a one-dimensional array of numbers that has the largest possible sum.


// O(n³) — Brute Force: Check every start index st, every end index end, and run a third loop i from st to end to sum each subarray from scratch.


#include<iostream>
#include<array>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int st=0; st<n; st++){
        for(int end=st ;end<n; end++){
            for(int i=st; i<=end; i++){

                cout<< arr[i];
            }

            cout<< " ";
        }
        cout<< endl;
    }
    return 0;
}



// The O(n²) time complexity approach to the Maximum Subarray Sum problem is the improved brute-force solution 
// that evaluates all possible contiguous subarrays using two nested loops and a running sum.


#include<iostream>
#include<array>
using namespace std;

int main(){
   int n=5;
   int arr[5] = {1, 2, 3, 4, 5};

   int maxSum = INT_MIN;
   
   for(int st=0; st<n; st++){
    int currSum = 0;
    for(int end=st; end<n; end++){
        currSum += arr[end];
        maxSum = max(currSum, maxSum);
    }
   }

   cout<< "Max SubArray : "<< maxSum << endl;

   return 0;
}


// 53. Maximum Subarray in Leetcode
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Constraints:

// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector <int> &nums){
    int currSum=0;
    int maxSum = INT_MIN;

    for(int val : nums){
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "Maximum Subarray Sum: "
         << maxSubArray(nums) << endl;

    return 0;

}