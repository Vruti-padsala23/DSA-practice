// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
// The input is generated such that a majority element will exist in the array.


// Brute force (O(n2))

#include<iostream>
#include<vector>
#include<array>

using namespace std;

int majorityElement(vector<int> &nums){
    int n = nums.size();

    for(int val : nums){
        int frequency = 0;

        for(int el : nums){
            if(el == val){
                frequency++;
            }
        }
        if(frequency > n/2){
            return val;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1, 2, 2, 1, 1};
    cout<< "Majority element :"<< majorityElement(nums)<< endl;

    return 0;
}


// Using shorting method (O(nlogn + n))


#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

using namespace std;

int majorityElement(vector<int> &nums){
    int n = nums.size();

    // sort

    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,2,3};
    cout<< "Majority element :"<< majorityElement(nums)<< endl;

    return 0;
}


// Using "Moore's" voting algorithm (O(n))


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int majorityElement(vector<int> &nums){
    int freq = 0, ans =0;

    for(int i=0; i< nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    int count = 0; 
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count > nums.size()/2){
        return ans;
    }else{
        return -1;
    }
}

int main(){
    vector<int> nums = {3,2,3};
    cout<< "Majority element :"<< majorityElement(nums)<< endl;

    return 0;
}