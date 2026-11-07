#include <bits/stdc++.h>
#define int long long
using namespace std;
char c1,s1,c2,s2;
char a,a1;
char b,b1;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else cout<<0;
	for(int i=1;i<=4;i++){
		if(s1>='0'&&s1<='9')a++;
		if(s2>='0'&&s2<='9')a1++;
	}
	if(c1==c2&&a==a1)cout<<1;
	else cout<<0;
	for(int i=1;i<=4;i++){
		if(s1>='A'&&s1<='F')b++;
		if(s2>='A'&&s2<='F')b1++;
	}
	if(c1==c2&&a==a1&&((b>='A'&&b<='C'&&b1>='A'&&b1<='C')||(b>='D'&&b<='F'&&b1>='D'&&b1<='F')))cout<<1;
	else cout<<0;
	
	return 0;
} 
