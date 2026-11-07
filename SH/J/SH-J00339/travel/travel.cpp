#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int row1=(s1[0]-'0')*10+(s1[1]-'0');
	int row2=(s2[0]-'0')*10+(s2[1]-'0');
	int col1=(s1[2]<='D'?s1[2]-'A':4);
	int col2=(s2[2]<='D'?s2[2]-'A':4);
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2&&row1==row2) cout<<1;
	else cout<<0;
	if(c1==c2&&row1==row2&&((col1<=2&&col2<=2)||(col1>2&&col2>2))) cout<<1;
	else cout<<0;
	if(c1==c2&&((col1<=2&&col2<=2&&abs(col1-col2)==1)||(col1>2&&col2>2&&abs(col1-col2)==2))) cout<<1;
	else cout<<0;
	return 0;
}
