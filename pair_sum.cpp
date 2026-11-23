// Pair sum :  return pair in sorted array with target sum.
// Brute force approach O(n2)

#include<iostream>
#include<vector>
#include<array>

using namespace std;


vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;

    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2,3,5,7,8,9,4,19};
    int target = 13;

    vector<int> ans = pairSum(nums, target);

    cout<< ans[0] << " " << ans[1] << endl;
    return 0;
}


//output :  2 4


// Optimized solution 

#include<iostream>
#include<vector>
#include<array>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0; 
    int j = n-1;

    while(i < j){
        int pairSum = nums[i] + nums[j];

        if(pairSum > target){
            j--;
        }else if (pairSum < target)
        {
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            
            return ans;
        }
        
    }

    return ans;

}

int main(){
    vector<int> nums = {2,3,4,5,7,8,9,19};
    int target = 13;

    vector<int> ans = pairSum(nums, target);

    cout<< "Sum is on index: " << ans[0] << " , " << ans[1] << endl;
    return 0;
}


// Sum is on index: 2 , 6