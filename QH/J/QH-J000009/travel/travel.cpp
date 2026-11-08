#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int C1,S1,C2,S2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	C1=(c1[0]-'0')*10+c1[1]-'0';
	C2=(c2[0]-'0')*10+c2[1]-'0';
	//cout<<C1<<" "<<C2<<endl;
	if(C1==C2){
		cout<<'1';
		S1=(s1[0]-'0')*10+s1[1]-'0';
		S2=(s2[0]-'0')*10+s2[1]-'0';
		if(S1==S2)cout<<'1';
		else cout<<'0';
		if(S1!=S2){
			cout<<"00";
			return 0;
		}else{
			char ans='0';
			if(s1[2]=='A'&&s2[2]=='B')ans='1';
			if(s1[2]=='A'&&s2[2]=='C')ans='1';
			if(s1[2]=='B'&&s2[2]=='A')ans='1';
			if(s1[2]=='B'&&s2[2]=='C')ans='1';
			if(s1[2]=='C'&&s2[2]=='A')ans='1';
			if(s1[2]=='C'&&s2[2]=='B')ans='1';
			if(s1[2]=='D'&&s2[2]=='F')ans='1';
			if(s1[2]=='F'&&s2[2]=='D')ans='1';
			cout<<ans;
			if(ans=='1'){
				char ans1='0';
				if(s1[2]=='A'&&s2[2]=='B')ans1='1';
				if(s1[2]=='B'&&s2[2]=='A')ans1='1';
				if(s1[2]=='B'&&s2[2]=='C')ans1='1';
				if(s1[2]=='C'&&s2[2]=='B')ans1='1';
				if(s1[2]=='D'&&s2[2]=='F')ans1='1';
				if(s1[2]=='F'&&s2[2]=='D')ans1='1';
				cout<<ans1;
			}else cout<<'0';
		}
	}else cout<<"0000";
	return 0;
} 
