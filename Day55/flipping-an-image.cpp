class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size(),a=0,b=0;
        vector<vector<int>> t(n,vector<int>(n));
        for(int i=0;i<image.size();i++){
            b=0;
            for(int j=image[i].size() - 1;j>=0;j--){
                if(image[i][j]==0)
                t[a][b++]=1;
                else
                t[a][b++]=0;
        }
        a++;
        }
        return t;
    }
};