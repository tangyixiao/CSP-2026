#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,p[1000001],c[1000001],s[1000001];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		p[i]=s[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof(c));
		int l=n;
		for(int j=i;j<=n;j++){
			bool f=0;
			for(int k=1;k<=n;k++){
				if(s[k]==s[j]){
					for(int x=k;x<=n;x++){
						s[x]=0;
						l--;
					}
					f=1; 
				}
			}
			if(!f){
				l++;
				s[l]=s[j];
			}
		}
		for(int j=1;j<=l;j++){
			c[s[j]]++;
		}
		for(int j=1;j<=n;j++){
			s[j]=p[j];
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
}