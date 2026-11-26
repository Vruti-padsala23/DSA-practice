// 11. Container With Most Water
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int> &height){
    int maxWater = 0;
    for(int i=0;i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            int w = j-i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<< maxArea(height)<< endl;

    return 0;

}


// optimal solution


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int> &height){
    int maxWater = 0;
    int lp = 0, rp = height.size()-1;
    while(lp < rp){
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);

        int currWater = w * ht;
        maxWater = max(maxWater, currWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<< maxArea(height)<< endl;

    return 0;

}