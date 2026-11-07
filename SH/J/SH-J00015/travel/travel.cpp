#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f1=c1==c2;
	bool f2=f1&&s1.substr(0,2)==s2.substr(0,2);
	bool f3=f2&&(s1.back()<='C')==(s2.back()<='C');
	bool f4=f1&&f3&&abs(s1.back()-s2.back())==1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}//100 AC
