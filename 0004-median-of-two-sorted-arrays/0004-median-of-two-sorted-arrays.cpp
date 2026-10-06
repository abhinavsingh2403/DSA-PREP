class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        int n=n1+n2;
        int m1=n/2;
        int m2=m1-1;
        int m1ele=-1,m2ele=-1;
        int cnt=0;
        while(i<n1&&j<n2){
            if(nums1[i]<=nums2[j]){
                if(cnt==m1)m1ele=nums1[i];
                if(cnt==m2)m2ele=nums1[i];
                cnt++;
                i++;
            }
            else{
                if(cnt==m1)m1ele=nums2[j];
                if(cnt==m2)m2ele=nums2[j];
                cnt++;
                j++;
            }
        }
        while(i<n1){
            if(cnt==m1)m1ele=nums1[i];
                if(cnt==m2)m2ele=nums1[i];
                cnt++;
                i++;
        }
        while(j<n2){
            if(cnt==m1)m1ele=nums2[j];
                if(cnt==m2)m2ele=nums2[j];
                cnt++;
                j++;
        }
        if(n%2==1)return m1ele;
        return (double)((double)m1ele+m2ele)/2;
    }
};