#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else       cout<<"0";
	string a1;
	string a2;
	string a="";
	for(int i=0;i<=1;i++){
		a+=s1[i];
	}a1=s1[2];
	string b="";
	for(int i=0;i<=1;i++){
		b+=s2[i];
	}a2=s2[2];
	if(a==b) {
		cout<<"1";
		if((a1<"D"&&a2<"D")||(a1>"C"&&a2>"C")) cout<<"1";
		else cout<<"0";
	}
	else cout<<"0";
	if((a2=="A"&&a1=="B") ||(a2=="B"&&a1=="A") ) cout<<"1";
	if((a2=="B"&&a1=="C") ||(a2=="C"&&a1=="B") ) cout<<"1";
	if((a2=="C"&&a1=="D") ||(a2=="D"&&a1=="C") ) cout<<"1";
	else cout<<"0";
	
	return 0;
}
