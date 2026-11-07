#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],k;
long long ans;
bool flag=0;
int c[N],t[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof(c));
		k=0;
		for(int j=i;j<=n;j++){
			flag=0;
			for(int p=1;p<=k;p++){
				if(c[p]==a[j]&&!flag){
					flag=1;
				}
				if(flag)c[p]=-1;
			}
			c[++k]=a[j];
		}
		for(int i=1;i<=k;i++){
			if(c[i]>=1)t[c[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<t[i]<<" ";
	return 0;
}
