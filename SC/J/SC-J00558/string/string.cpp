#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
int n;
ll zgs,cnt;
struct node{
	int gs;
	char c;
}a[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int cc=0;
	while(n--){
		int x;
		char y;
		cin>>x>>y;
		cc++;
		a[cc].gs=x;
		a[cc].c=y;
		zgs+=x;
	}
	ll l=1,r=zgs,lll=0,rrr=0;
	int ccl=1,ccr=cc;
	while(r>l){
		lll++;
		rrr++;
		if(lll>a[ccl].gs){
			lll=1;
			ccl++;
		}
		if(rrr>a[ccr].gs){
			rrr=1;
			ccr--;
		}
		if(a[ccl].c!=a[ccr].c) cnt++;
		l++;r--;
	}
	cout<<cnt;
	return 0;
}
