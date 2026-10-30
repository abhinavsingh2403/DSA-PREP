class Solution {
public:
    int countPrimes(int n) {
        vector<int>primes(n,true);
        if(n<2)return false;
        int c=0;
        for(int i=2;i<n;i++){
            if(primes[i]){
                c++;
                for(long long j=(long long )i*i;j<n;j+=i)primes[j]=false;
            }
        }
        return c;
    }
};