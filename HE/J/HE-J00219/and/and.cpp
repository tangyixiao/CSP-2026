#include <bits/stdc++.h>
using namespace std;
long long a[200005],ans=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i]<a[j]){
				int c=a[j];
				a[j]=a[i];
				a[i]=c;
			}
		}
	}
	ans=a[1];
	for(int i=1;i<=m-1;i++){
		ans=(ans&a[i+1]);
	}
	cout<<ans;
	return 0;
}
