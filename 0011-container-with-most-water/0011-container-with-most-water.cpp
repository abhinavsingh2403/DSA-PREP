class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1;
        int area;
        int maxarea=INT_MIN;
        while(lp<rp){
            int w=rp-lp;
            int h=min(height[lp],height[rp]);
            if(h==height[lp]){
                lp++;
            }
            else{
                rp--;
            }
            area=w*h;
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};