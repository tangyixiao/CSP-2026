#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
typedef long long ll;
ll a[N],b[N];
ll n,m;
bool cmp(int x,int y)
{
	return x>y; 
}
string s="";
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+m+1,cmp);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		while(a[i]!=0)
		{
			sum=a[i]%2+sum;
			a[i]=a[i]/2;
		}
	}
	cout<<sum*2;
	return 0;
}