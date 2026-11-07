#include<bits/stdc++.h>
using namespace std;
string t;
char a[200005];
long long n,b[200005],s,sum,m;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	 cin>>n;
	 for(int i=1;i<=n;i++)
	 {
	 	cin>>b[i]>>a[i];
	 	s+=b[i];
	 	for(int j=1;j<=b[i];j++)
	 	{
	 		t+=a[i];
		}
	 }
//	 cout<<t[0];
	m=s;
	 	for(int i=0;i<s/2;i++)
	 	{
	 		if(t[i]!=t[m-1])
	 		{
	 			sum++;
			}
			m--;
	 	}
	 	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
