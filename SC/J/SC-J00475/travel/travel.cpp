#include<bits/stdc++.h>

using namespace std;
map<char,int>mp;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	mp['A']=1,mp['B']=1,mp['C']=1,mp['D']=2,mp['F']=2;
	if(c1==c2) cout<<"1";
	else cout<<"0";
	if(c1==c2){
		if(s1[0]==s2[0]){
			if(s1[1]==s2[1]) cout<<"1";
			else cout<<"0";
		}else cout<<"0";
	}else cout<<"0";
	if(c1==c2){
		if(s1[0]==s2[0]){
			if(s1[1]==s2[1]){
				if(mp[s1[2]]==mp[s2[2]]) cout<<"1";
				else cout<<"0";
			}
			else cout<<"0";
		}else cout<<"0";
	}else cout<<"0";
	if(c1==c2){
		if(s1[0]==s2[0]){
			if(s1[1]==s2[1]){
				if(mp[s1[2]]==mp[s2[2]]){
					if(abs(s1[2]-s2[2])==1&&((s1[2]!='D'&&s2[2]!='F')&&(s1[2]!='F'&&s2[2]!='D'))) cout<<"1";
					else cout<<"0";
				}
				else cout<<"0";
			}
			else cout<<"0";
		}else cout<<"0";
	}else cout<<"0";
	return 0;
}