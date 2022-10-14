/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    //双指针法，用一个快指针一个慢指针
    int removeElement(vector<int> &nums, int val)
    {
        int slowIndex = 0;
        int size = nums.size();
        for (int fastIndex = 0; fastIndex < size; fastIndex++)
        {
            if (val != nums[fastIndex])
            {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }
};
// @lc code=end
//暴力解法
int removeElement(vector<int> &nums, int val)
{
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == val)
        {
            for (int j = i + 1; j < size; j++)
            {
                nums[j - 1] = nums[j];
            }
            i--;
            size--;
        }
    }
    return size;
}