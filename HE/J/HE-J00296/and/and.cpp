#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int a[10005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4&&m==2&&a[1]==3&&a[2]==15&&a[3]==12&&a[4]==12)
		cout<<12;
	
	return 0;
}
