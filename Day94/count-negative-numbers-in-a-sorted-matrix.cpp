class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c = 0, pos = 0;
        for(int i = 0; i < grid.size(); i++){
            pos = 0;
            int flag = 0;
            int start = 0,  end = grid[i].size() - 1;
            int mid = 0;
            while(start<=end){
                mid = (start+end)/2;
                if(grid[i][mid]<0){
                    end = mid - 1;
                    pos = mid;
                    flag = 1;
                }
                else{
                    start = mid + 1;
                }
            }
            if(flag == 1){
                int temp = (grid[i].size()) - pos;
                c += temp; 
            }
        }
        return c;
    }
};