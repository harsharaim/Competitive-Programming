class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s=nums.size();
        for(int i=0;i<s;i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};