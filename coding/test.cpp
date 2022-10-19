#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int numsSize = nums.size();
    int numsEnd = numsSize - 1;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 0)
        {
            for (int j = i; j < numsSize - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[numsEnd--] = 0;
        }
        if (numsEnd <= i)
            break;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    system("pause");
    return 0;
}
