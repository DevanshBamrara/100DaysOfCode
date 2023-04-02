// https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/submissions/926423375/
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
    int one=0,zero=0,mx=0;
    //string s = "111";
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'&&i==0)
            zero++;
        else if(s[i]=='1'&&i==0)
            one++;
        else if(s[i]=='0'&&s[i-1]=='1'){
            int mn = min(one,zero)*2;
            mx = max(mx,mn);
            zero=1;
            one=0;
        }
        else if(s[i]=='0'){
            zero++;
        }
        else if(s[i]=='1'){
            one++;
        }
    }
    int mn = min(one,zero)*2;
    mx = max(mx,mn);
    return mx;
        
    }
};