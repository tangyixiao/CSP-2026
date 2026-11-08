#include<bits/stdc++.h>
using namespace std;
string S,S1,S2;
string b[200005];
int num;
long long n,a[100000000],c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		c+=a[i];
		for(int j=0;j<a[i];j++)
			S=S+b[i];
	}
	for(int i=0;i<c/2;i++)
	{
		if(S[i]!=S[n-i])
		num++;
	}
	cout<<num<<endl;
	return 0;
	fclose(stdin);
	fclose(stdout);
}

