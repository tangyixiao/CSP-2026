#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],cnt[40],sum[40],d,e,ans,sm,len;
string s[200005];
bool vis[200005];
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		long long t=a[i],l=0;
		s[i]+=" ";
		while(t){
			cnt[++l]+=t%2;
			sum[l]=i;
			s[i]+=char('0'+t%2);
			t/=2;  
		}
		len=s[1].size()-1;
		while(s[i].size()-1<len)s[i]+='0';
	}
	d=n;
	for(int i=31;i>=1;i--){
		sm=0;
		for(int j=1;j<=d;j++){
			if(s[j][i]=='1'&&vis[j]==0)sm++,e=j;
		}
		if(sm>=m){
			for(int j=1;j<=d;j++)if(s[j][i]=='0')vis[j]=1;
			d=e;
		}
	}
	ans=1;
	for(int i=1;i<=32;i++)ans*=2;
	ans--;
	for(int i=1;i<=d;i++)if(vis[i]==0)ans=(ans&a[i]);
	cout<<ans;
	return 0; 
} 