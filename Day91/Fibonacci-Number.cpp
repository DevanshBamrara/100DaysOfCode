class Solution {
public:
    int fib(int num) {
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
    }
};