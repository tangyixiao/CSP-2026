#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
map<char,int>mp;
map<char,int>mp1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	mp['A']=1;mp['B']=1;mp['C']=1;mp['D']=2;mp['F']=2;
	mp1['A']=1;mp1['B']=2;mp1['C']=3;mp1['D']=4;mp1['F']=5;
	if(c1==c2){
		cout<<"1";
		int x1=(s1[0]-'0')*10+(s1[1]-'0');
		int x2=(s2[0]-'0')*10+(s2[1]-'0');
		if(x1==x2){
			cout<<"1";
			if(mp[s1[2]]==mp[s2[2]]){
				cout<<"1";
				if(abs(mp1[s1[2]]-mp1[s2[2]])==1)cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}