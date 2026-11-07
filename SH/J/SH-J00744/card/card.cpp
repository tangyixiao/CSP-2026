#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+1;
long long n,m,a[maxn];
int c[maxn];
bool k[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=0;
		k[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(k[a[j]]!=0) {
				long long v=-1,l=j;
				while(a[j]!=v){
					l--;
					v=a[l];
					k[v]=0;
				}
			}
			k[a[j]]=1;
			
		}
		for(int j=1;j<=n;j++){
			c[j]+=k[j];
			k[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
