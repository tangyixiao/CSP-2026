#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],ans,m;
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	m=m/2;
	int l=1,r=n,j,l1=a[1],r1=a[n];
	char cl=c[l],cr=c[r];
	while(j<m){
		j+=min(l1,r1);
		if(cl!=cr)ans+=(max(l1,r1)-abs(l1-r1));
		if(l1==r1){l1=0;r1=0;l1=a[++l];r1=a[--r];cl=c[l];cr=c[r];}
		else if(l1<r1){r1-=l1;l1=a[++l];cl=c[l];}
		else{l1-=r1;r1=a[--r];cr=c[r];}
	}
	cout<<ans;
	return 0;
}
