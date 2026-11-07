#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in", "r");
	freopen("strint.out", "w");
	long long a;
	long long x[a]={};
	string y[a]={};
	int cnt = 0;
	cin >> a;
	for (int i = 0; i <= a-1; i++){
		cin >> x[i] >> y[i];
	}
	long long z;
	for (int i = 0; i <= a; i++){
		z += x[i];
	}
	for (int i = 0; i <= z; i++){
		for (int j = a; j >= 0; j--){
			if (y[i] != y[j]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
