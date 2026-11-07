#include<bits/stdc++.h>
using namespace std;
int a[500005],s[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n,t=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int t=0;
		for(int j=i;j<=n;j++){
			for(int x=1;x<=t;x++){
				if(b[x]==a[j]){
					for(int y=x;y<=t;y++)b[y]=-1;
					break;
				}
			}
			b[t++]=a[j];
		}
		for(int j=1;j<=t;j++){
			if(b[j]!=-1)s[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<s[i]<<" ";
	return 0;
}