class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = 0;
        for(int i=0;i<sentences.size();i++){
            string s = sentences[i];
            int c = 0;
            for(int j=0;j<s.size();j++){
                if(s[j]==' '){
                    c++;
                }   
            }
            cout<<c<<endl;
            mx = max(mx,c+1);
        }
        return mx;        
    }
};