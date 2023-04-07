class Solution {
public:
    int countDigits(int num) {
        int temp = num, c=0;
        while(num!=0){
            int t = num%10;
            if(temp%t==0)
                c++;
            num/=10;
        }
        return c;
    }
};