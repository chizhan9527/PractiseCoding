/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int RightBorder = rightBorder(nums, target);
        int LeftBorder = leftBorder(nums, target);
        if (RightBorder == -2 || LeftBorder == -2)
            return {-1, -1};
        else if (RightBorder - LeftBorder > 1)
            return {LeftBorder + 1, RightBorder - 1};
        else
            return {-1, -1};
    }

private:
    int rightBorder(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int rightBorder = -2;
        while (left <= right)
        {
            int middle = (left + right) / 2;
            //求右边界
            if (nums[middle] > target) //在左区间
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
                rightBorder = left;
            }
        }
        return rightBorder;
    }

    int leftBorder(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int leftBorder = -2;
        while (left <= right)
        {
            int middle = (left + right) / 2;
            //求左边界
            if (nums[middle] >= target) //在左区间
            {
                right = middle - 1;
                leftBorder = right;
            }
            else
            {
                left = middle + 1;
            }
        }
        return leftBorder;
    }
};
// @lc code=end
