#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin << n << m;
	if (n > m) {
		n - 1;
		cont >> n;
	} else
		m++;
	cont >> m;
	return 0;
}

