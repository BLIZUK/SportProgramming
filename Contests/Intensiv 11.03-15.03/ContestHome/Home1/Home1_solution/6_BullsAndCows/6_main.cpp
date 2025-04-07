#include <iostream>
#include <sstream>
#include <string>
#include <vector>


void split(const std::string& input, std::vector<std::string>& nums)
{
	std::istringstream inputstream(input);
	std::string num;

	while (inputstream >> num)
	{
		nums.push_back(num);
	}
}


void counting(std::vector<std::string>& nums, int res[2])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (nums[0][i] == nums[1][j])
			{
				if (i == j) res[0]++;
				else res[1]++;
			}

		}
	}
}


void input_output()
{
	int res[2] = { 0, 0 };

	std::string input;
	getline(std::cin, input);

	std::vector<std::string> nums;
	split(input, nums);

	counting(nums, res);
	std::cout << res[0] << " " << res[1] << std::endl;
}


int main()
{
	input_output();
	return 0;
}