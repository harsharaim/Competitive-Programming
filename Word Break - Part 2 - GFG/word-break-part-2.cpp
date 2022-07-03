// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
vector<vector<string>> ans;

void solve(string s, unordered_map<string, int> &m, vector<string> &osf){
    if(!s.size()){
        ans.push_back(osf);
        return;
    }
    
    string t="";
    for(int i=0;i<s.size();i++){
        t.push_back(s[i]);
        if(m.find(t)!=m.end()){
            osf.push_back(t);
            solve(s.substr(i+1), m, osf);
            osf.pop_back();
        }
    }
}

class Solution{
public:
    vector<string> wordBreak(int n, vector<string>& v, string s)
    {
        unordered_map<string, int> m;
        for(auto &x:v){
            m[x]++;
        }
        ans.clear();
        vector<string> osf;
        solve(s, m, osf);
        vector<string> t;
        for(auto &x:ans){
            string r="";
            for(auto &y:x){
                if(r.size()){
                    r+=" "+y;
                }else{
                    r+=y;
                }
            }
            t.push_back(r);
        }
        return t;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends