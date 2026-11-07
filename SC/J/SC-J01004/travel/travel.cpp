#include<bits/stdc++.h>
using namespace std;
int chex=1,pai=1,ce=1,xl=1;
map<char,int> mp;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A']=mp['B']=mp['C']=1;
	mp['D']=mp['F']=2;
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<3;i++){
		if(s1[i]!=s3[i]) chex=0,pai=0,ce=0,xl=0;
	}
	if(!chex){
		printf("0000");
		return 0;
	}
	for(int i=0;i<2;i++){
		if(s2[i]!=s4[i]) {
			pai=0,ce=0,xl=0;
		}
	}
	if(!pai){
		printf("1000");
		return 0;
	}
	if(mp[s2[2]]!=mp[s4[2]]){
		ce=0,xl=0;
	}
	if(!ce){
		printf("1100");
		return 0;
	}
	if(abs(int(s2[2]-'A')-int(s4[2]-'A'))!=1){
		xl=0;
	}
	printf("111%d",xl);
	return 0;
} 