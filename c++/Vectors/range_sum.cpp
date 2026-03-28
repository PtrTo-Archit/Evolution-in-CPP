#include<iostream>
#include<vector>
using namespace std;
class NumArray{
    public:
    vector<int>prefix;
    NumArray(vector<int>&nums){
        prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefix.push_back(prefix[i-1]+ nums[i]);
        }
    }
    int sumRange(int left , int right){
        if(left==0) return prefix[right];
        else{
            return prefix[right] - prefix[left-1];
        }
    }
};
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    
    // 1. Create an object of NumArray
    NumArray obj(nums); 
    
    int left = 2;
    int right = 5;
    
    // 2. Call the function using the object name and the dot operator
    int result = obj.sumRange(left, right);
    
    cout << "Sum is: " << result << endl;

    return 0;
}