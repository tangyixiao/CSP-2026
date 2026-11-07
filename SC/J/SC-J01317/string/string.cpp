#include<bits/stdc++.h>
#define int long long
using namespace std;
struct zfc{
	int num
	char c;
}z[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int len=0;
	for(int i=1;i<=n;i++){
		cin>>z[i].num>>z[i].c;
		len+=z[i].num;
	}
	if(n==2&&s[0]!=s[1]){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
