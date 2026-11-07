#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
map<char,char>mp;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A']='1';
	mp['B']='2';
	mp['C']='3';
	mp['D']='5';
	mp['F']='6';
	cin>>c1>>s1>>c2>>s2;
	s1[2]=mp[s1[2]];
	s2[2]=mp[s2[2]];
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if((s1[2]<='3'&&s2[2]<='3')||(s1[2]>='5'&&s2[2]>='5'))
				cout<<1<<(abs(s1[2]-s2[2])==1);
			else
				cout<<"00";
		}
		else
			cout<<"000";
	}
	else
		cout<<"0000";
	return 0;
}
