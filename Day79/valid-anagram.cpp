class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++){
            //string tm = s[i];
            size_t found = t.find(s[i]);
        if (found == string::npos)
            return false;
        else
            t[found]='0';
        }
        return true;
    }
};