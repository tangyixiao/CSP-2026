#include <iostream>

int c1, c2;
std::string s1, s2;

int getline( std::string p) {
	return (p[0]-'0')*10+(p[1]-'0');
}

bool check( std::string p1, std::string p2) {
	
	char cp1 = p1[2], cp2 = p2[2];
	
	bool p1l = ( cp1 <= 'c' );
	bool p2l = ( cp2 <= 'c' );
	
	return p1l == p2l;
	
}

bool check_in( std::string p1, std::string p2) {
	
	char c[2] = { p1[2], p2[2]};
	
	if(c[0] > c[1])
		std::swap( c[0], c[1]);
	
	if(c[1] == c[0] + 1)
		return 1;
	
	return 0;
	
}

int main() {
	
	freopen( "travel.in", "r", stdin);
	freopen( "travel.out", "w", stdout);
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);
	
	std::cin >> c1 >> s1 >> c2 >> s2;
	
	bool flag1, flag2, flag3, flag4;
	flag1 = flag2 = flag3 = flag4 = 0;
	
	if(c1 == c2)
		flag1 = 1;
	if(flag1 && getline(s1) == getline(s2))
		flag2 = 1;
	if(flag2 && check(s1,s2))
		flag3 = 1;
	if(flag3 && check_in(s1,s2))
		flag4 = 1;
	
	std::cout << flag1 << flag2 << flag3 << flag4;
	
	return 0;
	
}