#include<bits/stdc++.h>
using namespace std;
int a[500100];
int s[500100],vis[500100];
int c[500100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=1;
	for(int l=1;l<=n;l++){
		memset(s,0,sizeof(s));
		memset(vis,0,sizeof(vis));
		int t=0;
		for(int i=l;i<=n;i++){
			if(vis[a[i]]==0){
				vis[a[i]]=1;
				s[++t]=a[i];
			}
			else{
				while(s[t]!=a[i]){
					vis[s[t]]=0;
					t--;
				}
			}
			//cout<<"t="<<t<<endl;
		}
		for(int i=1;i<=t;i++){
			c[s[i]]++;
		}
		//cout<<t<<endl;
		/*for(int i=1;i<=m;i++){
			cout<<c[i]<<"  ";
		}
		cout<<endl<<endl;*/
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}

