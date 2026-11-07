#include<bits/stdc++.h>
using namespace std;

long long n,m,sum;
long long x[1000],a[100],y[1000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		y[i]=x[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(x[j]==x[i]&&i!=j){
				for(int k=i;k<j;k++){
					x[k]=0;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(x[j]!=0) a[x[j]]++;
		}
		for(int j=1;j<=n;j++){
			x[j]=y[j];
		}

	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}