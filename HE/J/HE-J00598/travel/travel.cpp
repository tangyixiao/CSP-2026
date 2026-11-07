#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	char a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
		if(b-d==1||d-b==1)
		{
			cout<<"1";
		}
		else cout<<"0";
	}
	else cout<<"0";
	return 0;
}
