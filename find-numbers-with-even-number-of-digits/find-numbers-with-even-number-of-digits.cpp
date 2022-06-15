class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int s=nums.size();
        int even=0;
        for(int i=0;i<s;i++){
            int digits=0,n=nums[i];
            while(n!=0){
                n=n/10;
                digits++;
            }
            if(digits%2==0){
                even++;
            }
        }
        return even;
    }
};