#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
namespace CSPJ{
	int n;
	int c[200005];char s[200005];
	int cc[200005];char ss[200005];
	void solve(){
		cin>>n;
		int C=0;
		for(int i=1;i<=n;i++)cin>>c[i]>>s[i],C+=c[i];
		int mid=0;
		if(C&1){
			mid=(C+1)/2;
		}else mid=C/2;
		int y=0,o=0;
		for(int i=1;i<=n;i++){
			y+=c[i];
			if(y>=mid){
				for(int j=1;j<i;j++)cc[j]=c[j],ss[j]=s[j];
				int cnt=i-1;
				if(C&1){
					if(mid!=y-c[i]+1)cc[++cnt]=mid-(y-c[i]+1),ss[cnt]=s[i];
					o=cnt;
					if(mid!=y)cc[++cnt]=y-mid,ss[cnt]=s[i];
				}else{
					cc[++cnt]=mid-(y-c[i]),ss[cnt]=s[i];
					o=cnt;
					if(y!=mid)cc[++cnt]=y-mid,ss[cnt]=s[i];
				}
				for(int j=i+1;j<=n;j++)cc[++cnt]=c[j],ss[cnt]=s[j];
				n=cnt;
				for(int i=1;i<=n;i++)c[i]=cc[i],s[i]=ss[i];
				break;
			}
		}
		mid=o;
		char S='a';int cnt=0;int r=n;int ans=0;
		for(int i=1;i<=mid;i++){
			while(1){
				if(cnt==0){
					S=s[r];
					cnt=c[r--]; 
				}
				if(cnt>=c[i]){
					ans+=(S!=s[i])*c[i];
					cnt-=c[i];
					break;
				}else{
					ans+=(S!=s[i])*cnt;
					c[i]-=cnt;
					cnt=0;
				}
			}
		}
		cout<<ans;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int Q=1;
//	cin>>Q;
	while(Q--)CSPJ::solve();
//while(1);
	return 0;
}
/*
警示后人：不开 long long 见ZQ。 
先求中间。 
万圣节密码：Trick||Treat!
s MB
s MB
*/

