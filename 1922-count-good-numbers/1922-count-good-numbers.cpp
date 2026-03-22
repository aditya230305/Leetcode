class Solution {
public:
    const int m=1e9+7;
    int power(long long x,long long y){
        if(y==0) return 1;
        if(x==1) return 1;
        long long half=power(x,y/2);
        long long result=(half*half)%m;
        if(y%2==1) result=(result*x)%m;
        return result;
    }
    int countGoodNumbers(long long n) {
        return (long long)power(5,(n+1)/2)*power(4,n/2)%m;
        
    }
};