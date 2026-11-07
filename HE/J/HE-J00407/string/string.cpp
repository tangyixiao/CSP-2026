#include<bits/stdc++.h>
#define long long int
using namespace std;
const int N=10010;
int n,a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	if(n==1) cout<<0;
	if(n==2) {
		cin>>a[1]>>c[1]>>a[2]>>c[2];
		if(c[1]==c[2]) cout<<0;
		else {
			int temp=min(a[1],a[2]);
			if(temp%2==0) cout<<temp/2;
			else cout<<temp/2+1;
		}
	}
	return 0;
}
