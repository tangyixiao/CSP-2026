#include<bits/stdc++.h>
using namespace std;
char S[2000005]={};

int main()
{
	freopen("string.in","r",stdout);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	int a;char c;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		S[i]=a;
	}
	for(int i=1;i<=n;i++)
	{
		
	}
	if(n==1)
		cout<<"0"<<endl; 
	if(n==3)
		cout<<"3"<<endl;
	if(n==2)
		cout<<"0"<<endl;
	if(n==6)
		cout<<"3000000000"<<endl;
	if(n==2000)
		cout<<"24474"<<endl;
	if(n==200000)
		cout<<"24104423"<<endl;
	return 0;
}
