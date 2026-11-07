#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	string a="",c="";char b,d;
	for(int i=0;i<s1.size()-1;i++) a+=s1[i];
	for(int i=0;i<s2.size()-1;i++) c+=s2[i];
	b=s1[s1.size()-1];
	d=s2[s2.size()-1];
	bool x1=(c1==c2);
	bool x2=x1&&(a==c);
	bool x3=x2&&((b<='C'&&d<='C')||(b>='D'&&d>='D'));
	bool x4=x3&&((abs((int)b-(int)d)==1&&b!='D'&&d!='D')||(b=='D'&&d=='F')||(b=='F'&&d=='D'));
	cout<<x1<<x2<<x3<<x4;
	return 0;
}