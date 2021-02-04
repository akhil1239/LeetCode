class Solution {
public:
    int maxArea(vector<int>& height) {
        int l,r,a=0,b=0;
        l=0;
        r=height.size()-1;
        while(l<r){
            a=min(height[l],height[r]);
            b=max(b,a*(r-l));
            height[l]>height[r] ? r-- : l++; 
        }
        return b;
    }
};
