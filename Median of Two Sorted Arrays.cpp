class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a(nums1.size() + nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),a.begin());
        if(a.size()%2==0){
            return (a[a.size()/2-1] + a[a.size()/2])/2.0;
        }
        else { return a[a.size()/2]; }
    }
};
