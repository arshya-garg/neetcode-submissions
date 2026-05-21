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
        int i =0;
        while(i < n){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            ans.push_back(word);
            i = j+1+len;
        }
        // for(int i=0;i<n;){
        //     int j = i;
        //     while(s[j] != '#'){
        //         j++;
        //     }
        //     int count = stoi(s.substr(i,j-i));
        //     string temp = s.substr(j+1,count);
        //     ans.push_back(temp);
        //     i= j+1+count;

        // }
        
        return ans;
    }
};
