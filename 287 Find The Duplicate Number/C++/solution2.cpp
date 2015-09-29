class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int N = nums.size();
        if(N == 0) { return 0; }
        int n = N - 1;
        int temp(0);
        for(int i = n; i > 0;) {
            if(nums[i] % N == nums[nums[i] % N] % N) {
                if(i == nums[i] % N) {          // self
                    nums[i] = nums[i] % N + N;  // visited
                    --i;                        // go prev element
                }
                else return nums[i] % N;
            }
            else {                              // swap nums[i] and nums[num[i]]
                temp = nums[ nums[i] % N];
                nums[ nums[i] % N] = nums[i] + N;
                nums[i] = temp;
            }
        }
        return nums[0];
    }
};