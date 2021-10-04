class Solution {
public:
int subarraySum(vector<int>& nums, int k) {


   int ans=0,sum=0;
    unordered_map<int,int>mp;

    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k) ans++;
        if(mp.find(sum-k)!=mp.end())
            ans+=mp[sum-k];
        mp[sum]++;
    }
    return ans;

}



};
