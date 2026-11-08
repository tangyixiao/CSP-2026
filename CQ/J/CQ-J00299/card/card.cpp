#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],f[N];
bool flag[N];
stack<int> q; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i]; 
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++) flag[a[i]]=0;
		for(int i=j;i<=n;i++){
			if(flag[a[i]]){
				while(!q.empty()&&q.top()!=a[i]) q.pop();
			}
			else{
				flag[a[i]]=1;
				q.push(a[i]);	
			}
		}
		while(!q.empty()){
			f[q.top()]++;
			q.pop(); 
		} 
	}
	for(int i=1;i<=m;i++) cout<<f[i]<<" ";
	return 0;
}
