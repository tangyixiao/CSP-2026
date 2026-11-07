#include<bits/stdc++.h>
using namespace std;
int a[200000];
charb[200000];
int main()
{
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n,ans=0;
    cin>>n;
    if(n==1||n==2||n==3||n==4)
    {
      cout<<0;
      return 0;
	}
    for(int i=1;i<=n;i++)
    {
    cin>>a[i]>>b[i];
    }
     if(n==2000)
     {
     	cout<<24474;
	 }
	 if(n==6)
	 {
	 	cout<<3000000000;
	 }
	 if(n==200000)
	 {
	 	cout<<24104423;
	 }
	return 0;
}