#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005],c[20000];
int main() 
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	int mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	
	for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
			if(a[i]==a[i+1]){
				c[i]=a[i];
			}
	}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1])
		cout<<max(mx,i)<<" ";
	}
	return 0;
}
