#include <bits/stdc++.h>
using namespace std;
const int N=3e5+10;
long long n,m,a[N],b[N]={0},v[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	long long c=1;
	while(c<=n){
		v[N]={0};
		v[1]=a[c];
		for(int i=c;i<=n;i++){
			for(int j=1;j<i;j++){
				if(v[j]==-1)continue;
				if(v[j]!=a[i])v[i]=a[i];
				else{
					for(int k=j;k<i;k++)v[k]=-1;
					v[i]=a[i];
				}
			}
		}
		for(int i=1;i<=n;i++)if(v[i]>0)b[v[i]]++;
		c++;
	}
	for(int i=1;i<=n;i++)if(b[i]!=0)cout<<b[i]<<" ";
	return 0;
} 
