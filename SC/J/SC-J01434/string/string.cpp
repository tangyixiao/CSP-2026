#include<iostream>
using namespace std;
int N=200001;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,a[N];
    long long sum=0;
    char b[27];
    cin>>n;
    for(int i=1;i<=n;i++)
    {cin>>a[i]>>b[i];
	sum+=a[i];}
    int t=0;
    for(int i=1;i<n;i++)
    {if(b[i]==b[i+1])
    t=1;
    else
    {t=0;
	break;}}
	if(t==1)
    {cout<<"0";
	return 0;}
	if(sum%2==0)cout<<sum/2;
	else cout<<(sum-1)/2;
	return 0;
} 