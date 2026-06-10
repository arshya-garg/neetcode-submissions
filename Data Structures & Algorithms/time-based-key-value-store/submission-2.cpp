class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>> temp = mp[key];
        string ans = "";
        int n = temp.size();
        int start = 0;
        int end = n-1;
        while(end>=start){
            int mid = (start+end)/2;
            if(temp[mid].first <= timestamp){
                ans = temp[mid].second;
                start = mid+1;
            }
            else{
                end = mid-1;
            }

        }
        return ans;
    }
};
