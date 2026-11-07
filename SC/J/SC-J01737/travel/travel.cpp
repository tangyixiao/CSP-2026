#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<char,int> mp;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	mp['A']=mp['B']=mp['C']=1;
	mp['D']=mp['F']=2;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(mp[s1[2]]==mp[s2[2]])cout<<1;
	else {
		cout<<0<<0;
		return 0;
	}
	if(s1[2]+1==s2[2]||s2[2]+1==s1[2])cout<<1;
	else cout<<0;
	return 0;
}