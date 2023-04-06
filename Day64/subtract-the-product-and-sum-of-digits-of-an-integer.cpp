class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, pro = 1;
        while(n!=0){
            int t = n%10;
            sum+=t;
            pro*=t;
            n/=10;
        }
        return pro-sum;
    }
};