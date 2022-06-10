class Solution {
public:
    int subtractProductAndSum(int n) {
    int sum=0;
    int prod=1;
    while(n!=0)
    {
        int lastdigit=n%10;
        sum+=lastdigit;
        prod*=lastdigit;
        n=n/10;
    }
    int ans=prod-sum;
        return ans;

        
    }
};