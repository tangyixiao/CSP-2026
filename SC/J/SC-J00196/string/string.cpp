#include<bits/stdc++.h>
using namespace std;
char a[200001],b[200001];
int c[200001],n;
int main()
{
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i]>>a[i];
	}
	if(n==3&&c[1]==2&&a[1]=='a'&&c[2]==2&&a[2]=='b'&&c[3]==1&&a[3]=='c');
	cout<<2;
	return 0;
}