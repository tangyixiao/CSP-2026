#include<bits/stdc++.h>
using namespace std;

int now[200005];
int a[200005];
int l[100005];
int n,m;
int c;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		c=0;
		memset(now,0,sizeof(now));
		for(int j=i;j<=n;j++){
			for(int k=c;k>=1;k--){
				if(now[k]==a[j]){
					int tmp=c;
					for(int z=k;z<c;z++){
						now[z]=0;
						tmp--;
					}
					c=tmp;
					break;
				}
			}
			c++;
			now[c]=a[j];
		}
		for(int j=1;j<=c;j++){
			l[now[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<l[i]<<" ";
	}
	return 0;
}
