        vector<int> result(nums.size(),1);
        int left = 1;
        for(int i =0; i<nums.size()-1; i++) {
            left = left*nums.at(i);
            result.at(i+1) = left*result.at(i+1);
        }

        int right = 1;
        for(int i =nums.size()-1; i>0; i--) {
            right = right*nums.at(i);
            result.at(i-1) = right * result.at(i-1); 
        }
        return result;