#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int a[N],b[M],ans[M];
stack<int>z;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		memset(b,0,sizeof(b));
		for(int j=n-i+1;j<=n;j++){
			if(!z.empty()&&b[a[j]]==1){
				int t=z.top();
				while(t!=a[j]){
					z.pop();
					t=z.top();
				}
				z.pop();
				b[a[j]]=0;
			}
			else b[a[j]]=1;
			
			z.push(a[j]);
		}
		while(!z.empty()){
			int cmp=z.top();
			z.pop();
			ans[cmp]++;
			//cout<<cmp<<" "; 
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' '; 
	}
	return 0;
}