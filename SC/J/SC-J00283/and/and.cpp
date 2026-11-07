#include<bits/stdc++.h>
using namespace std;
int a[200005],ls[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int yjtt=0;
	long long ans=0;
	for(int i=30;i>=0;i--){
		vector<int>f(n+10,0);
		int tt=yjtt;
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(ls[j]!=0)cnt++;
			else if(((a[j]>>i)&1)==0){
				cnt++;
				f[j]=1;
				if(ls[j]==0)tt++;
			}
		}
		long long ch=n-cnt;
		if(ch>=m&&n-tt>=m){
			yjtt=tt;
			for(int j=1;j<=n;j++){
				if(f[j]==1)ls[j]=max(ls[j],i);
			}
			ans+=(1<<i);
		}
	} 
	cout<<ans;
	return 0;
}
