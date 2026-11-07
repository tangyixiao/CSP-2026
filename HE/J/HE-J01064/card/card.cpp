#include<bits/stdc++.h>
using namespace std;
int a[500100],s[500100];
bool p[500100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(p,0,m+1);
		int j=i+1;
		p[a[i]]=1;
		while(j<=n){	
			if(p[a[j]]==1){
				int l=j-1;
				while(a[l]!=a[j]){
					p[a[l]]=0;
					l--;
				}
			}
			p[a[j]]=1;
			j++;
		}
		for(int k=1;k<=m;k++){
			if(p[k]==1){
				s[k]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
} 
