#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
//100pts
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	mp['A'] = 1;
	mp['B'] = 1;
	mp['C'] = 1;
	mp['D'] = 2;
	mp['F'] = 2;
	if(c1 == c2){
		cout<<1;
	}else cout<<0;
	string sw1 = s1.substr(0,2);
	string sw2 = s2.substr(0,2);
	if(c1 == c2 && sw1 == sw2){
		cout<<1;
	}else cout<<0;
	if(c1 == c2 && sw1 == sw2 && mp[s1[2]] == mp[s2[2]]){
		cout<<1;
	}else cout<<0;
	if(c1 == c2 && sw1 == sw2 && mp[s1[2]] == mp[s2[2]] && abs(s2[2] - s1[2]) == 1){
		cout<<1;
	}else cout<<0;
	return 0;
}
