class Solution {
public:
    int minMoves(int num, int maxDoubles) {
    //int num=19,maxDoubles=2,c=0;
    int c=0;
    while(num!=1){
        if((num%2==0&&num>=2)&&maxDoubles!=0){
            num/=2;
            c++;
            maxDoubles--;
        }
        else{
            if(maxDoubles==0){
                c+=num-1;
                break;
            }
            num--;
            c++;
        }
    }
    return c;
    //cout<<c;
    }
};