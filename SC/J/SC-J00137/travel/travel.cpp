#include<bits/stdc++.h>
#define fre(x) freopen(x".in","r",stdin);freopen(x".out","w",stdout)
using namespace std;
int main()
{
	fre("travel");
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a;
	int b;
	int a_;
	int b_;
	char a1;
	char b1;
	cin >> a >> a_ >> a1 >> b >> b_ >> b1;
	if(a == b) cout << 1; else cout << 0;
	if(a == b && a_ == b_) cout << 1;else cout << 0;
	if(a == b && a_ == b_ && ((a1 <= 'C' && b1 <= 'C') || (a1 > 'C'  && b1 > 'C'))) cout << 1;else cout << 0;
	if(a == b && a_ == b_ && ((a1 <= 'C' && b1 <= 'C') || (a1 > 'C'  && b1 > 'C')) && (a1-b1 == 1 || a1-b1 == -1)) cout << 1;else cout << 0;
	return 0;
}