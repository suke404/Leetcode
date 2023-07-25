class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = nums.size();
        int c = 0;
        set<int> st(nums.begin(), nums.end());
        priority_queue<pair<int,int>>  pq;
        set<int>::iterator itr;

        for(auto i: nums)
            mp[i]++;

        for (itr = st.begin();itr != st.end(); itr++){
             pq.push({mp[*itr],*itr});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;

    }
};