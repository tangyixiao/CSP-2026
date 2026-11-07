#include<bits/stdc++.h>
using namespace std;
int a[111111];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s=1;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n-1);
	s=a[n-1]&a[n-2];
	m-=2;
	n-=2;
	while(m--)
	{
		s=s&a[n-1];
		n--;
	}
	cout<<s;
	return 0;
}
