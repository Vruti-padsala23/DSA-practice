// Given a non-empty array of integers nums, 
// every element appears twice except for one. Find that single one.

// Constraints:

// 1 <= nums.length <= 3 * 104
// -3 * 104 <= nums[i] <= 3 * 104
// Each element in the array appears twice except for one element which appears only once.


#include<iostream>
#include<vector>
#include<array>
using namespace std;

int singleNumber(vector<int> &nums){
    int ans = 0;

    for(int val : nums){
        ans = ans ^ val;
    }
    
    return ans;
}

int main(){
    vector<int> nums = {4,1,2,3,1,3,5,2,4,6,7,7,6};

    cout<< singleNumber(nums)<< endl;

    return 0;
}