#include<iostream>
#include<vector>
#include<string>
using namespace std;
int idx(vector<int> &nums , int st , int end , int tar){
    int mid = st + (end - st)/2;
    if(nums[mid] < tar){
        return idx(nums , mid + 1 , end , tar);
    }
    else if(nums[mid] == tar){
        return mid;
    }
    else{
        return idx(nums , st , mid - 1 , tar);
    }
    return -1;
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    int size = nums.size() - 1;
    int target = 2;
    cout << idx(nums,0,size-1,target) << endl;
return 0;
}