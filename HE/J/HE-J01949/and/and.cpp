#include<bits/stdc++.h>
using namespace std;
long long max1=0;
long long n,m,ad;
long long a[200500];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
cin>>n>>m;
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++){
	for(int j=i+1;j-i<=m;j++){
         ad=a[i]&a[j];
		if(max1<ad)max1=ad;
	}
}
cout<<max1;
return 0;
}
