class Solution {
public:
    int countEven(int num) {
        int temp = num;
            int sum = 0;
            while(num!=0){
                int t = num%10;
                sum += t;
                num/=10;
            }
            if(sum%2==0)
                return temp/2;
        return (temp-1) /2 ;
    }
};