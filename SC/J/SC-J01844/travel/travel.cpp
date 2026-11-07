// #define NDEBUG
#include<bits/stdc++.h>
#ifdef NDEBUG
#define print(...) void()
#else
#define print(...) void(fprintf(stderr, __VA_ARGS__))
#endif
#define up(i,l,r) for (int i=l; i<=r; ++i)
#define dn(i,r,l) for (int i=r; i>=k; --i)
using namespace std; using ll = long long;
int c[128], x[128];
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	c['A']=c['B']=c['C']=1, c['D']=c['F']=2;
	x['A']=0, x['B']=1, x['C']=2, x['D']=4, x['F']=5;
	int flag=c1==c2;
	cout << flag;
	flag&=s1.substr(0,2)==s2.substr(0,2);
	cout << flag;
	flag&=c[s1[2]]==c[s2[2]];
	cout << flag;
	flag&=abs(x[s1[2]]-x[s2[2]])==1;
	cout << flag;
	return 0;
}