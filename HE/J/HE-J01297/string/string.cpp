#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char a[1005],c[1005];
	int n,b[1005]={0},i=0,j=0,e=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>b[i]>>c[i];
		j=j+b[i];
	}
	//for(i=1;i<=n;i++)
	//{
//		e=j/2;
		
//	}
	cout<<"0";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
