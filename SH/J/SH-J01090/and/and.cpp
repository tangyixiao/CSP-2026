#include<bits/stdc++.h>
using namespace std;
int a[111111],z;
//string q(string a)
//{
//	string w,e;
//	int i=1,mx=0;
//	while(a>0)
//	{
//		i++;
//		w[i]=a%2;
//		a/=2;
//	}
//	for(int i=w.(int)size();i>=0;i--)
//	{
//		e+=w[i];
//	}
//	return e;
//	
//}
int main()
{
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	int n,m,r,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}	
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		s+=a[n+1-i]|s;
	}
	cout<<s;
	
	
}
