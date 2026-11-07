#include <bits/stdc++.h>

using namespace std;
int a,b,c,d;
int main(){
	ios::sync_with_stdio(false);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	a = c1==c2;
	b = a&&(s1[0]==s2[0]&&s1[1]==s2[1]);
	c = b&&((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'));
	d = c&&(abs(s1[2]-s2[2])<=1);
	cout<<a<<b<<c<<d<<endl;
	
	return 0;
}