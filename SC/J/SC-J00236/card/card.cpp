#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],ans[M];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			int b[M];
			bool f[M];
			if(f[a[i]]){
				int t=i-b[a[i]];
				while(t--)
					s.pop();
			}
			s.push(a[i]);
			f[a[i]]=true;
			b[a[i]]=i;
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}