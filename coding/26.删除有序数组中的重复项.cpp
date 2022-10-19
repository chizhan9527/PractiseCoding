/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int p = 0;
        int q = 1;
        for (; q <= nums.size() - 1; q++)
        {
            if (nums[p] != nums[q])
            {
                nums[p + 1] = nums[q];
                p++;
            }
        }
        return p + 1;
    }
};
// @lc code=end
