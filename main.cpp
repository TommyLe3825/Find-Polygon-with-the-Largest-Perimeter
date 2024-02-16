class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long sum = 0; 
        int n = nums.size();

        sort(nums.begin(),nums.end()); //sorting it to make it easier to find the largest possible perimeter
        for(auto i : nums){ //get the sum of all the positive integers
            sum += i; //for [5,5,50], it would be 60
        }

        for(int i = n - 1; i >= 1; i--) //starting from the last element in the array
        {
            sum -= nums[i]; //like for [5, 5, 50], sum would be 60 - 50 = 10 since i will be 2 and subtracting the largest since we sorted it
            if(sum > nums[i]){ //Is 10 > 50? False
                return sum + nums[i]; //If it was true, it will just add back the element to the sum and return it
            }
        }

        return -1;
    }
};

