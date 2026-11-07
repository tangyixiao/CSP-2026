#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200009;
string s;
char c[N];
int a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)s+=c[i];
	}
	for(int i=0;i<ceil(s.size()/2.0);i++)
		if(s[i]!=s[s.size()-i])
			cnt++;
	cout<<cnt;
	return 0;
}
