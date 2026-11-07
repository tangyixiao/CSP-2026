#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200010], t[200010], f = LLONG_MIN, q, b[200010],t1,t2,z,m[100010],zzz,m1[100010],zz,tt[100010],s,ttt[100010];

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		t[i] = a[i];
		if (a[i] >= f) {
			f = a[i];
		}
	}
	if (m == 1) {
		cout << f;
		return 0;
	}
	for (int i = 1; i <= m; i++) {
		m = LLONG_MIN;
		for (int j = 1; j <= n; j++) {
			if (m < a[j]) {
				m = a[j];
				q = j;
				b[i] = a[j];
			}
		}
		a[q] = 0;
	}
	for (int i = 1; i <= m-1; i++)
	{
		z=b[i];
		while(z!=0)
		{
			zzz++;
			m[zzz]=z%2;
			z/=2;
		}
		z=b[i+1]
		while(z!=0)
		{
			zz++;
			m1[zz]=z%2;
			z/=2;
		}
		for(int j=zzz;j<=1;j++)
		{
			s++;
			tt[s]=m[j];
		}
		s=0;
		for(int j=zz;j<=1;j++)
		{
			s++;
			ttt[s]=m1[j];
		}
		
		for(int j=1;j<=min(zz,zzz);j++)
		{
			if(ttt[j]==tt[j])
			{
				a[i+1]
			}
		}
	}



	return 0;
}
