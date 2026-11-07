#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
struct l{
	int a;
	char c;
}a[N];
int n;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	bool flg=1;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
		for(int j=1;j<=a[i].a;j++) s.push_back(a[i].c);
		if(a[i].c!=a[i-1].c) flg=0;
	}
	if(flg) return cout<<0,0;
	int sum=0,k=s.size();
	for(int i=0;i<k/2;i++) if(s[i]!=s[k-i-1]) sum++;
	cout<<sum;
	return 0;
}