#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int ans = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        if (val == nums[i])
        {
            ans--;
            for (int j = i; j < nums.size() - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int ans = removeElement(nums, val);
    for (int i = 0; i < 4; i++)
    {
        cout << nums[i] << endl;
    }
    system("pause");
    return 0;
}
