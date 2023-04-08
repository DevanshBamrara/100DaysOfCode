class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }   
        int t = x;
        long long ans = 0;
        while(x!=0){
            int t = x%10;
            ans = ans*10+t;
            x/=10;
        }
        if(ans==t)
        return true;

        return false;
    }
};