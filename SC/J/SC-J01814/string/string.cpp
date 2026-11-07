#include <iostream>
#include <cstring>
using namespace std;
string s;
int change_time(int a[200005], char c[200005], int n) {
	int index = 0,len=0;
	for (int i = 0; i < n; i++) {
		for (int j = index; j < index + a[i]; j++) {
			s[j] = c[i];
			len++;
		}
		index += a[i];
	}
	int devide = len / 2 + 1;
	int times = 0;
	if (len % 2 != 0) {
		for (int i = devide; i < len; i++) {
			if (s[i] != s[len - 1 - i]) {
				times++;
			}
		}
	} else {
		for (int i = devide - 1; i < len; i++) {
			if (s[i] != s[len - i]){
				times++;
			}
		}
	}
	return times;
}

int main() {
	int n, a[200005] = {0};
	char c[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	cout<<change_time(a,c,n);
	return 0;
}