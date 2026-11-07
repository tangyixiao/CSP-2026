#include <iostream>
#include <string>
#include <map>
#include <cmath>

std::string c1, s1, c2, s2;
std::map<std::string, int> mp, mp2;

int main()
{
	std::ios::sync_with_stdio(false);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	mp["A"] = 1;
	mp["B"] = 1;
	mp["C"] = 1;
	mp["D"] = 2;
	mp["F"] = 2;
	
	mp2["A"] = 1;
	mp2["B"] = 2;
	mp2["C"] = 3;
	mp2["D"] = 4;
	mp2["F"] = 5;
	
	std::cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		std::cout << "1";
		if (s1.substr(0, 2) == s2.substr(0, 2))
		{
			std::cout << "1";
			if (mp[s1.substr(2, 1)] == mp[s2.substr(2, 1)])
			{
				std::cout << "1";
				if (std::abs(mp2[s1.substr(2, 1)] - mp2[s2.substr(2, 1)]) == 1)
				{
					std::cout << "1";
				}
				else
				{
					std::cout << "0";
				}
			}
			else
			{
				std::cout << "00";
			}
		}
		else
		{
			std::cout << "000";
		}
	}
	else
	{
		std::cout << "0000";
	}
	
	return 0;
}
