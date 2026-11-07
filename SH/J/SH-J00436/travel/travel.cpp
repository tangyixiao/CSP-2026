#include <iostream>
#include <string>
#include <string.h>
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	std::string a, b, c, d;
	char e, f;
	char ch;
	
	ch = getchar();
	a += ch;
	ch = getchar();
	a += ch;
	
	ch = getchar();
	
	ch = getchar();
	b += ch;
	ch = getchar();
	b += ch;

	e = getchar();

	ch = getchar();

	ch = getchar();
	c += ch;
	ch = getchar();
	c += ch;

	ch = getchar();

	ch = getchar();
	d += ch;
	ch = getchar();
	d += ch;

	f = getchar();
	
	if (a == c) {
		std::cout << "1";
		if (b == d) {
			std::cout << "1";
			if (e <= 'C' && f <= 'C') {
				std::cout << "1";
				if (f - e == 1 || f - e == -1) {
					std::cout << "1";
				}
				else {
					std::cout << "0";
				}
			}
			else if (e >= 'D' && f >= 'D') {
				std::cout << "11";
			}
			else {
				std::cout << "00";
				return 0;
			}
		}
		else {
			std::cout << "000";
			return 0;
		}
	}
	else {
		std::cout << "0000";
		return 0;
	}
	return 0;
}
