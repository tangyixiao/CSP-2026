#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int cnt=0;
	if(c1==c2){
		cout<<1;
		cnt++;
	}else{
		cout<<0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&cnt==1){
		cout<<1;
		cnt++;
	}else{
		cout<<0;
	}
	if('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C'&&cnt==2){
		cout<<1;
		cnt++;
	}else if('D'<=s1[2]&&s1[2]<='E'&&'D'<=s2[2]&&s2[2]<='E'&&cnt==2){
		cout<<1;
		cnt++;
	}else{
		cout<<0;
	}
	if(cnt==3){
		if(s1[2]=='A'){
			if(s2[2]=='B'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s1[2]=='B'){
			if(s2[2]=='A'||s2[2]=='C'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s1[2]=='C'){
			if(s2[2]=='B'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s1[2]=='D'){
			if(s2[2]=='E'){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s1[2]=='E'){
			if(s2[2]=='D'){
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}else{
		cout<<0;
	}
	return 0;
}