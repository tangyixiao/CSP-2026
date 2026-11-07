 #include<bits/stdc++.h>
using namespace std;
int n,m,tot;
int a[500050];
int ans[300050];
int vis[300050];
vector<int> v;
int main(){
	freopen("card.in ","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i<= n; i++){
		cin>>a[i];
	}
	if(n<=500 && m<=300){
		for(int i = 1;i<=n;i++){
			if(vis[a[i]] == 0){
				vis[a[i]] = tot;
			}
			else{
				int tott = vis[a[i]];
				for(int i = vis[a[i]]; i<=tot; i++){
					v[i] = 0;
				}	 
				tot = tott;
			}
			v[++tot] = a[i];
			for(int i = 1;i<=tot;i++){
				ans[v[i]]++;
			}
		}		
	}
	else{
		for(int i = 1;i<=n;i++){
			ans[a[i]]++;
		}	
	}
	for(int i = 1; i<=m; i++){
		cout<<ans[i];
	} 
} 