#include<bits/stdc++.h>
using namespace std;
int s[10000000],g,a[10000000],d;
int n,m,c[10000000],k=1,b;
bool v[10000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.in","w",stdout);/**/
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(k<=n){
		g=0;
		for(int i=k;i<=n;i++){
			for(int j=1;j<=g;j++){
				if(a[i]==s[j]){
					for(int z=j;z<=n;z++){
						s[i]=0;
					}
					g=j;
					break;
				}
			}
			g++;
			s[g]=a[i];
		}
		for(int i=1;i<=g;i++){
			b=s[i];
			if(v[b]==0){
				c[b]++;
				v[b]=1;
			}
		}
		for(int i=1;i<=n;i++){
			v[i]=0;
			s[i]=0;
		}
		k++;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
}
