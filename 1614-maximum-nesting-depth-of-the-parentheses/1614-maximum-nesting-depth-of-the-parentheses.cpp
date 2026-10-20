class Solution {
public:
    int maxDepth(string s) {
        int dept=0;
        int maxd=0;
        for(char c:s){
            if(c=='('){
                dept++;
                maxd=max(dept,maxd);
            }
            else if(c==')'){
                dept--;
            }
        }
        return maxd;
    }
};