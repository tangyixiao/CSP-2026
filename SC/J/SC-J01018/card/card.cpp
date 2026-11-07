#include<bits/stdc++.h>
using namespace std;
const int N=(1e5+5)*5;
const int M=(1e5+5)*3;
int n,m;
int a[N],t[M],b[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int i=1;
	while(i<=n){
		b[N]={0};
		int z=n-i+5;
		int k[z]={0};
		for(int j=i;j<=n;j++){	
			k[a[j]]++;
			b[j]=a[j];
			if(k[a[j]]>1){
				int x=j-1;
				while(x){
					if(b[x]==b[j]){
						b[x]=0;
						break;
					} 
					else	
						b[x]=0;	
					x--; 
				}
				k[a[j]]=1;
			}
		}
		for(int j=i;j<=n;j++){
			for(int y=1;y<=m;y++)
				if(b[j]==y) t[y]++;
		}
		i++;
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	return 0;
}