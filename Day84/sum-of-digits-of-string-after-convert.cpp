class Solution {
public:
    int getLucky(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int val = s[i]-'a' + 1;
            ans += val < 10 ? val : (val%10 + val/10);
        }
        k-=1;
        for(int i=0;i<k;i++){
            int sum=0;
            while(ans!=0){
                int t = ans%10;
                sum += t;
                ans/=10;
            }
            ans = sum;
        }
        return ans;
    }
};