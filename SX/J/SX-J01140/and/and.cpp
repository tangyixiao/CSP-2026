#include <iostream>
using namespace std;

int main() {
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdin);

	int a, b;
	while (scanf("%d %d", &a, &b) == 2) {
		printf("%d\n", a + b);
	}
	return 0;
}