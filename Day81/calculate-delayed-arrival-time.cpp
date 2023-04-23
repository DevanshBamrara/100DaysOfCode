class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int t = arrivalTime+delayedTime;
        if(t<24)
            return t;
        else if(t==24){
            return 0;
        }
        return t%24;
    }
};