#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	for(int i=0;i<int(a1.size());i++)
	{
		if(a1[i]!=a2[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	cout<<1;
	for(int i=0;i<=1;i++)
	{
		if(b1[i]!=b2[i])
		{
			cout<<"000";
			return 0;
		}
	}
	cout<<1;
	if((b1[2]<'D'&&b2[2]<'D')||(b1[2]>'C'&&b2[2]>'C'))
	{
		cout<<1; 
		int k1=b1[2],k2=b2[2];
		if(abs(k1-k2)==1)
		cout<<1;
		else
		cout<<0;
	}
	else
	cout<<"00";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
