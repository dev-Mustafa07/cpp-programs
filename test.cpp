#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < nums.size() ; i++)
    {
        int num;
        num = pow(nums[i], 2);
        std::cout << nums[i] << "  =  ";
        std::cout << num << "\n";
    }
    return 0;
}