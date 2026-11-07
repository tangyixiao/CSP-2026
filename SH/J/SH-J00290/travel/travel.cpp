//100
#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int f1=c1==c2,
	f2=f1&&(s1[0]==s2[0]&&s1[1]==s2[1]),
	f3=f2&&(s1[2]>='D'&&s2[2]>='D'||s1[2]<='C'&&s2[2]<='C'),
	f4=f3&&(abs(s1[2]-s2[2])==1);
	cout<<f1<<f2<<f3<<f4;
//	cout<<'\n'<<s1[2]-s2[2];
}
