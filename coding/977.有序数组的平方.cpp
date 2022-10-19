/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> result(nums.size(), 0);
        int index = nums.size() - 1;
        for (int i = 0, j = index; i <= j;)
        {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                result[index--] = nums[i] * nums[i];
                i++;
            }
            else
            {
                result[index--] = nums[j] * nums[j];
                j--;
            }
        }
        return result;
    }
};
// @lc code=end
