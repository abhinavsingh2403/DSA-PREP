class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long rev = 0;
        long ori=x;
        while (x > 0) {
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }
        if(rev==ori)return true;
        else return false;
    }
};