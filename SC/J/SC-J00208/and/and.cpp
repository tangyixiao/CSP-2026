#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
//main
int n,m;
int a[N];
string s[N];
int mx=0,aused=0;
bool cmp(int a,int b){
	return a>b?1:0;
}
//

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){cin>>a[i];
		mx=max(mx,a[i]);
		if(i==1)aused=a[1];
		aused=aused&a[i];
		if(a[i]!=i-1)flag=0;
	}
	if(m==1){cout<<mx;return 0;}
	else if(m==n){cout<<aused;return 0;}
	else if(m==2){
		int ansd=0; 
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				ansd=max(ansd,(a[i]&a[j]));
		cout<<ansd;return 0;
	}
	if(flag==0){
		sort(a+1,a+n+1,cmp);
		int ans=a[1];
		for(int i=2;i<=m;i++)ans=(ans&a[i]);
		cout<<ans;
	}else{
		sort(a+1,a+n+1,cmp);
		int i;
		for(i=1;i<=n+1;i*=2)i=i;
		i=i/2-1;
		int usans=i;
		for(int j=1;j<=m&&((i+1)/2-1)>=0;j++)usans=(usans&((i+1)/2-1));
		cout<<usans;
	}
	return 0;
}