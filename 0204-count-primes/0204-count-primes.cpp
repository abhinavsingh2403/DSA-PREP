class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);
        int c = 0;
        if(n<2)return false;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                c++;
                for (long long j = (long long)i * i; j < n; j += i)
                    prime[j] = false;
            }
        }
        return c;
    }
};