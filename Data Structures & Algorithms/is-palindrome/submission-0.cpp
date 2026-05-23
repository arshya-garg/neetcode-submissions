class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string temp = "";
        for(int i=0;i<n;i++){
            if(isdigit(s[i]) || isalpha(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }
        n = temp.length();
        int i = 0, j = n-1;
        while(j>i){
            if(temp[i] == temp[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
