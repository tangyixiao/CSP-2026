#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005];
int b[300005];//计数器 
bool s[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int k=0;
		stack<int> v;
		memset(s,0,n+5);
		for(int j=i;j<=n;j++){
			if(s[a[j]]==0){
				s[a[j]]=1;
				v.push(a[j]);
			}
			else{
				while(v.top()!=a[j]){
					s[v.top()]=0;
					v.pop();
				}
			}
		}
		while(!v.empty()){
			int h=v.top();
			v.pop();
			b[h]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}