#include<bits/stdc++.h>
using namespace std;
string s;
char c[10];
int n,a[100005],b[100005],m,x=1,y,z;
int main(){
	int k;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	if(m>3)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<k;
		}
	}
	cout<<n<<m<<m;
	return 0;
}
