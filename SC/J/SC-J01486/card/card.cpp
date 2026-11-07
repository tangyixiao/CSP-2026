#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],b[N],v,vis[N],cnt,c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","W",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		v=0,cnt=0;		
		for(int j=1;j<=n;j++){	
			if(!vis[j]){
				b[++v]=a[j];
				for(int k=1;k<=v;k++){					
					if(b[k]==b[v] && k!=v) {
						for(int f=k;f<v;f++){
							vis[f]=1;
						}
						v=k-1;
					}
				}				
			}								
		}
		for(int j=1;j<=v;j++){
			c[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" "; 
	}
	return 0;
}