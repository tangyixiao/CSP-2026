#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	int m=(s1[0]-'0')*10+s1[1]-'0',n=(s2[0]-'0')*10+s2[1]-'0';
	if(m!=n){
		cout<<"1000";
		return 0;
	}
	if((s1[2]=='D'&&s2[2]!='F')||(s1[2]=='F'&&s2[2]!='D')||(s2[2]=='D'&&s1[2]!='F')||(s2[2]=='F'&&s1[2]!='D')){
		cout<<"1100";
		return 0;
	}
	int x=s1[2]-'A',y=s2[2]-'A';
	if((abs(x-y)==1&&s1[2]!='D'&&s2[2]!='D')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}
