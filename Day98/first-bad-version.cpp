// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 0, e = n, mid, ans = -1;
        while(s<=e){
            mid = s+(e-s)/2;
            if(isBadVersion(mid)==true){
                e = mid - 1;
                ans = mid;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};