class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> g;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        auto ep = nums.begin()+ min(k, (int)nums.size());
        g = priority_queue<int, vector<int>, greater<int>>(nums.begin(), ep);
        for(int i = k; i < nums.size(); i++)
        {
            g.push(nums[i]);
            g.pop();
        }
    }
    int add(int val) {
        g.push(val);
        if(g.size() > k)
            g.pop();
        return g.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */