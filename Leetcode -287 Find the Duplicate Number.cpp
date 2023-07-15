class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int hare = nums[0];
        int turtle = nums[0];

        while(true)
        {
            hare = nums[nums[hare]];
            turtle = nums[turtle];
            if(hare == turtle)
                break;
        }

        turtle = nums[0];
        while(hare != turtle)
        {
            hare = nums[hare];
            turtle = nums[turtle];
        }
        return hare;
    }

};