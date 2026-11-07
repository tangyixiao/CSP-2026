#include<bits/stdc++.h>
using namespace std;
int n,a[200100],m;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);	
	}
	sort(a+1,a+n+1);
	if(m==1)	cout<<a[n];
	
	return 0;
}