#include <bits/stdc++.h>
using namespace std;
long long n,m,x,p[32],ans;
string s[200005];
bool vis[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	p[0]=1;
	for(int i=1;i<=30;i++) p[i]=p[i-1]*2;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=31;j++) s[i]+='0';
		cin>>x;
		vis[i]=1;
		for(int j=30;j>=0;j--){
		    if(x-p[j]>=0){
		    	s[i][j]='1';
		    	x-=p[j];
			}	
		}
	}
	for(int i=30;i>=0;i--){
		long long cnt=0;
		for(int j=1;j<=n;j++){
			if(vis[j]&&s[j][i]=='1'){
				cnt++;
			}
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				if(vis[j]&&s[j][i]=='0'){
					vis[j]=0;
				}
			}
			ans+=p[i];
		}
	}
	cout<<ans;
	return 0;
}
