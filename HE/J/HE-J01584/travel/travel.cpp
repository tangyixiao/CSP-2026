#include<bits/stdc++.h>
using namespace std;
string s,s1,a,b;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>a>>s1>>b;
	if(s==s1)cout<<1;
	else cout<<0;
	int bj=0;
	if(s==s1&&a[0]==b[0]&&a[1]==b[1])bj=1;
	if(bj==1)cout<<1;
	else cout<<0;
	if(bj==1&&((a[2]-'A'<3&&b[2]-'A'<3)||(a[2]-'A'>2&&b[2]-'A'>2)))
	cout<<1;
	else cout<<0;
	if(bj==1&&((a[2]-'A'<3&&b[2]-'A'<3)||(a[2]-'A'>2&&b[2]-'A'>2)))
	{
		if(a[2]-'A'>2&&b[2]-'A'>2)cout<<1;
		else if(a[2]-'A'<3&&b[2]-'A'<3&&abs((int)a[2]-(int)b[2])<2)cout<<1;
		else cout<<0;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
