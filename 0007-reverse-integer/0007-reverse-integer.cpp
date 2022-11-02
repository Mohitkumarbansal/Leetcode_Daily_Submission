class Solution {
public:
    int reverse(int x) {
        long long num=0;
        while(x!=0)
        {
            int rem=x%10;
            num=(num*10)+rem;
            if(num>pow(2,31) || num<-pow(2,31))
            {
                return(0);
            }
            x=x/10;
        }
        return(num);
    }
};