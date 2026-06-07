class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>> cars;

        for(int i=0;i<n;i++){
            double time = (double) ( target-position[i])/speed[i];
            cars.push_back({position[i],time});
        } 
        sort(cars.begin(),cars.end());

        int count = 0;
        double time = 0;
        for(int i=n-1;i>=0;i--){
            if(cars[i].second > time){
                count++;
                time = cars[i].second;
            }
        }
        return count;
    }
};
