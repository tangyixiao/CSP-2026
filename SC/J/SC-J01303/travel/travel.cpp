#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ch[26];
signed main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(false);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	string line1="";
	line1+=s1[0];
	line1+=s1[1];
	string line2="";
	line2+=s2[0];
	line2+=s2[1];
	if(line1!=line2){
		cout<<"1000";
		return 0;
	}
	char raw1=s1[2],raw2=s2[2];
	ch[0]=ch[1]=ch[2]=1;
	ch[3]=ch[4]=2;
	if(ch[raw1-'A']!=ch[raw2-'A']){
		cout<<"1100";
		return 0;
	}
	if(abs(int(raw1-raw2))!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
