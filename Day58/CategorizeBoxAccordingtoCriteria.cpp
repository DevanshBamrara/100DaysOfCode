class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long l = length, w = width, h = height;
        long long vol = l * w * h;
        long long di = length>=10000 || width>=10000 || height>=10000;
        if(di || vol>=1000000000){
            if(mass >= 100){
                return "Both";
            }
            return "Bulky";
        }
        else if(mass >= 100){
            return "Heavy";
        }

        return "Neither";
    }
};