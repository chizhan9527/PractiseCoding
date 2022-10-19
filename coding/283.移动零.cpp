/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int indexNow = 0;
        int indexNum = 0;
        int m = nums.size();

        while (indexNum < m)
        {
            if (nums[indexNum] != 0)
            {
                nums[indexNow++] = nums[indexNum];
            }
            ++indexNum;
        }

        for (int i = indexNow; i < m; i++)
        {
            nums[i] = 0;
        }
    }
};
// @lc code=end
