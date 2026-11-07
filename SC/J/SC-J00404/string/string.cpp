#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,a[200010],s[200010],ans;
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
	int l1=1,r1=n;
	while(l1<r1){
		if(c[l1]!=c[r1])ans+=min(a[l1],a[r1]);
		if(a[l1]==a[r1])l1++,r1--;
		else if(a[l1]>a[r1]){a[l1]-=a[r1];r1--;}
		else{a[r1]-=a[l1];l1++;}
	}
	cout<<ans;
	return 0;
}/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/