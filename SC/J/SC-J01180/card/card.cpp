#include <bits/stdc++.h>
using namespace std;
long long n,m,a[50005],b[30005],c[50005],c_t=1,d[30005];
void mN(long long x,long long y){
	for(int i=x;i<=y;i++){
		c[i]=0;
		c_t=x;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=0){
				mN(b[a[j]],j-1);
			}
			b[a[j]]=c_t;
			c[c_t]=a[j];
			c_t++;
			if(j==n){
				for(int k=1;k<=c_t;k++){
					d[c[k]]++;
					c[k]=0;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
} 