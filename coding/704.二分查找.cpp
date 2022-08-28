/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1; //不要忘记减一
        while (left <= right)
        {
            int middle = (left + right) / 2;
            if (nums[middle] > target)
            {
                right = middle - 1; // target 在左区间，所以[left, middle - 1]
            }
            else if (nums[middle] < target)
            {
                left = middle + 1; // target 在右区间，所以[middle + 1, right]
            }
            else
            {                  // nums[middle] == target
                return middle; // 数组中找到目标值，直接返回下标
            }
        }
        return -1;
    }
};
// @lc code=end
/*
**我的做法：
**想用并行计算的方法，但是做错了，这里强调了
**是升序排序的数组，可以用left，right来计算
*/
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int middle = (0 + nums.size()) / 2;
        for (int i = 0; i < middle; i++)
        {
            if (target == nums[i])
                return i;
            if (target == nums[i + middle])
                return i + middle;
        }
        return -1;
    }
};