#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],s[500005],p[500005],cun[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(cun,0,sizeof(cun));
		memset(s,0,sizeof(s));
		long long wei=0;
		for(int j=1+i-1;j<=n;j++){
			if(cun[a[j]]==0){
				s[++wei]=a[j];
				cun[a[j]]=wei;
			}
			else{
				for(int i=1;i<=m;i++){
					if(cun[i]>cun[a[j]])cun[i]=0;
				}
				wei=cun[a[j]];
			}
		}
		for(int j=1;j<=wei;j++)p[s[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<p[i]<<" ";
	return 0;
} 

