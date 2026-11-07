#include<bits/stdc++.h>
using namespace std;
string c,c2,s,s2;
bool fl,f2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c2>>s2;
	f2=(c==c2);
	cout<<f2;
	fl=(s[0]==s2[0]&&s[1]==s2[1])&&f2;
	cout<<fl;
	char a=s[2],a2=s2[2];
	if(((a<='C'&&a2<='C')||(a>'C'&&a2>'C'))&&fl){
		cout<<1;
		if(abs(a-a2)<=1)cout<<1;
		else cout<<0;
	}
	else{
		cout<<0<<0;
	}
	cout<<endl;
	return 0;
} 
