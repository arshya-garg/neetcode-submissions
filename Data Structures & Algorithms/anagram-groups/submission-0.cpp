class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<int> mp(n,0); 
        for(int i=0;i<n;i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            vector<string> v;
            
                for(int j=0;j<n;j++){
                string temp1 = strs[j];
                sort(temp1.begin(),temp1.end());
                if(temp==temp1 && mp[j] == 0){
                    v.push_back(strs[j]);
                    mp[j] = 1;
                }
            }

            if(!v.empty())
            ans.push_back(v);
            v = {};
        }
        return ans;
    }
};
