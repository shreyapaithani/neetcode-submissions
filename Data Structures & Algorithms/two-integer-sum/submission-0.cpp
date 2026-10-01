class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int remain=target-nums[i];
            
            if(mpp.find(remain)!=mpp.end()) {
                v.push_back(mpp[remain]);
                v.push_back(i);
                break;
            }
            mpp[nums[i]]=i;
        }
        return v;
    }
};
