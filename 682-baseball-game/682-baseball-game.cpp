class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>ans;
        for(string &i:ops){
            if(i=="D"){
                int l=ans.back();
                ans.push_back(2*l);
            }
            else if(i=="+"){
                int n=ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }else if(i=="C"){
                ans.pop_back();
            }else{
                ans.push_back(stoi(i));
            }
        }
        int sum=0;
        for(auto &i:ans){
            sum+=i;
        }
        return sum;
    }
};