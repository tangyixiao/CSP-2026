#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string m,n;
	cin >> a;
	cin >> m;
	cin >> b;
	cin >> n;
	if (a == b){
		cout << 1;
	}
	else{
		cout << 0;
	}
	int s = 0,t = 0;
	s = 10 * m[0] + m[1];
	t = 10 * n[0] + n[1];
	if (s == t){
		cout << 1;
	} 
	else{
		cout << 0;
	}
	if ('A' <= m[2] && 'A' <= n[2] && m[2] <= 'C' && n[2] <= 'C' || 'D' <= m[2] && 'D' <= n[2] && m[2] <= 'F' && n[2] <= 'F'){
		cout << 1;
	}
	else{
		cout << 0;
	}
	int w,v;
	w = m[2] - 'A';
	v = m[2] - 'A';
	if((w - v) == 1 || (w - v) == -1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
