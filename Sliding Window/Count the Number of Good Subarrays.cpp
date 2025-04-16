class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            int i=0;
            int j=0;
            long long res=0;
            unordered_map<int,int>mp;
            long long pair=0;
            int n=nums.size();
            while(j<n){
                pair+=mp[nums[j]];
                mp[nums[j]]++;
                while(pair>=k){
                    res+=(n-j);
                    mp[nums[i]]--;
                    pair-=mp[nums[i]];
                    i++;
                }
                j++;
            }
            return res;
        }
    };