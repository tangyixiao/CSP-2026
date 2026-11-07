#include<bits/stdc++.h>
using namespace std;
long long js(char c){
	if(c=='F')return 5;
	return c-'A'+1;
}
long long pailie(char c){
	if(c=='F'||c=='D')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>s1>>c1>>s2>>c2;
	string f1,f2;
	f1=c1[0]+c1[1];
	f2=c2[0]+c2[1];
	char g1,g2;
	g1=c1[2];
	g2=c2[2];
	if(s1!=s2){
		cout<<"0000";
		return 0;
	}
	if(f1!=f2){
		cout<<"1000";
		return 0;
	}
	long long q1=pailie(g1),q2=pailie(g2);
	if(q1!=q2){
		cout<<"1100";
		return 0;
	}
	long long p1=js(g1),p2=js(g2);
	if(abs(p1-p2)>1){
		cout<<"1110";
		return 0;
	}
	else cout<<"1111";
	return 0;
}
