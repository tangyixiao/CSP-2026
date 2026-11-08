#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a,b,c,d;
	a=(c1==c2?1:0);
	b=(((s1[0]==s2[0] && s1[1]==s2[1]) && a)?1:0);
	c=((((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D')) && a && b)?1:0);
	d=((((int)(s1[2]-s2[2])==1 || (int)(s2[2]-s1[2]==1)) && a && b && c)?1:0);
	cout<<a<<b<<c<<d<<endl;
	return 0;
}
