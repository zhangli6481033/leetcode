class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int pre = 0, cur = 0, n = nums.size();
        while (cur < n) {
            if (nums[pre] != nums[cur]){
                pre++;
                nums[pre]=nums[cur];
                cur++;
            } 
            else 
                cur++;
        }
        return pre + 1;
    }
};
