class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> v;
        for(int i=0;i<boxTypes.size();i++){
            v.push_back( make_pair(boxTypes[i][1],boxTypes[i][0]));
            // v[i].first = boxTypes[i][1];
            // v[i].second = boxTypes[i][0];
        }
        int maxUni = 0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            if(v[i].second == truckSize && truckSize > 0){
                maxUni += truckSize * v[i].first;
                truckSize -= v[i].second;
                break;
            }
            else if(v[i].second > truckSize && truckSize > 0){
                maxUni += truckSize * v[i].first;
                truckSize -= v[i].second;
                break;
            }
            else if(v[i].second < truckSize && truckSize > 0){
                maxUni += v[i].second * v[i].first;
                truckSize -= v[i].second;
            }
        }
        return maxUni;
    }
};