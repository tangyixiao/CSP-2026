#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	bool a,b,c,d;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a=1;
	else       a=0;
	if(a&&s1[0]==s2[0]&&s1[1]==s2[1]){
		b=1;
	}
	else{
		b=0;
	}
	if(b&&(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
	||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
		c=1;
	}
	else{
		c=0;
	}
	if(c&&abs(s1[2]-s2[2])<=1){
		d=1;
	}
	else{
		d=0;
	}
	cout<<a<<b<<c<<d;
	return 0;
}