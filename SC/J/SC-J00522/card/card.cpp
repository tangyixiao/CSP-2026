#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000010],ans[1000000];
bool b[1000000];
stack<int> s;
signed main(){
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		while(!s.empty())s.pop();
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				s.push(a[j]);
				b[a[j]]=1;
			}else{
				
				while(s.top()!=a[j]){
					b[s.top()]=0;
					s.pop();
				}
				
			}
			
		}
		for(int i=1;i<=m;i++)ans[i]+=b[i];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
}