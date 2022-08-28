/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int left = 0, right = num, ans = -1;
        while (left <= right)
        {
            int middle = (left + right) >> 1;
            if ((long long)middle * middle > num)
            {
                right = middle - 1;
            }
            else
            {
                ans = middle;
                left = middle + 1;
            }
        }
        if (num == ans * ans)
            return true;
        return false;
    }
};
// @lc code=end
