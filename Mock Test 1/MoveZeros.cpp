void moveZeroes(vector<int>& nums) {
        //initializing from first
        int i=0;

        //iterating from 0th index
        for(int j=0;j<nums.size();j++)
        {
            //checking if nums[j] is other than zero
            // then swap and increse the value of i
            if(nums[j]!=0)
            {
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }

//Time complexity O(n)
//Space Complexity O(1)
