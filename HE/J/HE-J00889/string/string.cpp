#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200010],qa[200010],ans;
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int ii=0,jj=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		qa[i]=qa[i-1]+a[i];
		jj+=a[i];
	}
	int i=1,j=n;
	while(i<=j){
		int u=qa[i],v=qa[j-1],ki=u-ii,kj=jj-v;
		if(c[i]!=c[j]){
			if(ki>kj){
				ii+=kj;
				jj-=kj;
				j--;
				ans+=kj;
			}
			else if(ki==kj){
				ii+=kj;
				jj-=kj;
				j--;
				i++;
				ans+=kj;
			}
			else{
				ii+=ki;
				jj-=ki;
				i++;
				ans+=ki;
			}
		}
		else{
			if(ki>kj){
				ii+=kj;
				jj-=kj;
				j--;
			}
			else if(ki==kj){
				ii+=kj;
				jj-=kj;
				j--;
				i++;
			}
			else{
				ii+=ki;
				jj-=ki;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
