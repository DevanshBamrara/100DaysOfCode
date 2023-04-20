class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mx = 0, p = 0;
        int l=0,r=1;
        while(r<a.size()){
            if(a[l] < a[r]){
                p = a[r] - a[l];
                mx = max(mx,p);
                r++;
            }
            else{
                l = r;
                r++;
            }
        }
        return mx;
    }
};