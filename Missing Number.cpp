class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> n(nums.size()+1,0);
        for(auto i:nums) n[i]++;
        for(int i=0;i<nums.size()+1;i++) if(n[i]==0) return i;
        return 0;
    }
};

        // OR     ( Use any one )
        
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum= nums.size()*(nums.size()+1)/2;
        int a=0;
        for(int i=0;i<nums.size();i++) a+=nums[i];
        return sum-a;
    }
};        
