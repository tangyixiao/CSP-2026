#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],b[300005],vis[300005];
stack<int> s;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	bool flag=true;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]<a[i-1]){
			flag=false;
		}
	} 
	if(n<=500){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				vis[j]=0;
			}
			for(int j=i;j<=n;j++){
				if(vis[a[j]]==0){
					s.push(a[j]);
					vis[a[j]]=1;
				}
				else{
					while(s.top()!=a[j]){
						vis[s.top()]=0;
						s.pop();
					}
				}
			}
			while(!s.empty()){
				b[s.top()]++;
				s.pop();
			}
		}
		for(int i=1;i<=m;i++){
			cout << b[i] << " ";
		}
	}
	else if(flag==true){
		for(int i=1;i<=n;i++){
			b[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			cout << b[i] << " ";
		}
	}
	
	
	return 0;
} 
