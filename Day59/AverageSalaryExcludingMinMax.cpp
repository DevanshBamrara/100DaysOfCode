// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int sum = accumulate(salary.begin()+1, salary.end()-1, 0);
        double ans = (double)sum/(salary.size()-2);
        return ans;
    }
};