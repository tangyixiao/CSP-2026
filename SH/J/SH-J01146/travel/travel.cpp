#include <bits/stdc++.h>
using namespace std;
string R;
string X;
int k1,k2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>k1>>R>>k2>>X;
	if(k1!=k2)
	{
		cout<<"0000"<<endl;
		return 0;
	}
	if(R[0]!=X[0]||R[1]!=X[1])
	{
		cout<<"1000"<<endl;
		return 0;
	}
	if((R[2]<='C'&&X[2]>'C')||(R[2]>'C'&&X[2]<='C'))
	{
		cout<<"1100"<<endl;
		return 0;
	}
	if(R[2]-X[2]!=1&&X[2]-R[2]!=1)
	{
		cout<<"1110"<<endl;
		return 0;
	}
	cout<<"1111"<<endl;
	return 0;
}
