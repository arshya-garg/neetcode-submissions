class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";
        for(string st: strs){
            s += to_string(st.length()) + "#" + st;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int n = s.length();
        
        for(int i=0;i<n;){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int count = stoi(s.substr(i,j-i));
            string temp = s.substr(j+1,count);
            ans.push_back(temp);
            i= j+1+count;

        }
        
        return ans;
    }
};
