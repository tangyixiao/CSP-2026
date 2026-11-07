#include <bits/stdc++.h>
using namespace std;

freopen("and3.in","r",stdin);
freopen("and.out","w",stdout);
long long a,b;
int main() {
	cin >> a >> b;
	int num[a] = {0};
	int number = 1;
	for (int i=0;i<a;i++) {
		cin >> num[i];
	}
	sort(num,num+a+1,greater<int>());
	for (int i=0;i<b;i++) {
		number = number & num[i];
	}
	cout << number;
}
