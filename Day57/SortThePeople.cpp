class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>> order;
        vector<string> t;
        for (int i = 0; i<names.size(); i++) {
            order[heights[i]]=names[i];
        }
        for (auto i = order.begin(); i!= order.end(); i++) {
            t.push_back(i->second);
        }
        return t;
    }
};