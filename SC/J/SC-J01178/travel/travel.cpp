#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char aa=s1[2],bb=s2[2];
	if(c1==c2)cout<<1;
	else {
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
	else {
		cout<<0<<0<<0;
		return 0;
	}
	if((aa<68&&bb<68)||(aa>67&&bb>67))cout<<1;
	else {
		cout<<0<<0;
		return 0;
	}
	if((aa>67&&bb>67)||((aa<68&&bb<68)&&((aa!=65&&bb!=67)&&(aa!=67&&bb!=65))))cout<<1;
	else cout<<0;
	return 0;
} 