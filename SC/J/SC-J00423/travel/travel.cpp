#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1>s2) swap(s1,s2);
	bool b=true;
	b&=(c1==c2); cout<<b;
	b&=(s1.substr(0,2)==s2.substr(0,2)); cout<<b;
	b&=(s2[2]>='D'?s1[2]>='D':s1[2]<='C'); cout<<b;
	b&=(s2[2]-s1[2]==1); cout<<b;
	cout<<'\n';
	return 0;
}