#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	char m[200001] = {};
	int a[200001] = {};
	long long l = 0;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		cin >> m[i];
		l += a[i];
	}
	long long mid = l / 2 - 1,cnt = 0;
	int f = 0;
	for(int i = 0;i <= mid;i++){
		int j = l - i - 1;
		int tmp = 0;
		cnt = 0;
		while (i > cnt){
			cnt += a[tmp];
			tmp++;
		}
		char c = m[tmp - 1];
		cnt = l;
		tmp = n - 1;
		while (j < cnt){
			cnt -= a[tmp];
			tmp--;
		}
		char n = m[tmp + 1];
		if (n == c){
			f += 0;
		}
		else if (n != c){
			f += 1;
		}
	}
	cout << f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
