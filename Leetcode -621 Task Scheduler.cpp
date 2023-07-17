class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> counts;
        for(char c: tasks) 
            counts[c]++;
        priority_queue<int> pq;
        for(auto c: counts)
            pq.push(c.second);
        
        int output = 0;
        while(!pq.empty())
        {
            int timer = 0;
            vector<int> tmp;
            for(int i = 0; i < n + 1; i++)
            {
                if(!pq.empty())
                {
                    tmp.push_back(pq.top() - 1);
                    pq.pop();
                    timer++;
                }
            }
            for(auto t: tmp)
            {
                if(t) pq.push(t);
            }
            output += pq.empty() ? timer: n + 1;
        }
        return output;
    }
};