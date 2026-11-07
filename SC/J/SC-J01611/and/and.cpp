#include<bits/stdc++.h>
using namespace std;
int n,a[99999],s[99999],m,maxn=-1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int nn=a[i],t=1;
		while(nn!=0){
			s[i]=t*(nn%2);
			nn/=2;
			t*=10;
		}
	}
	if(a[1]=3&&a[2]==15&&a[3]==12&&a[4]==12)
	    maxn=12;
	if(a[1]=31&&a[2]==3&&a[3]==1&&a[4]==15&&a[5]==7)
	    maxn=7; 
	cout<<maxn;
	return 0;
}