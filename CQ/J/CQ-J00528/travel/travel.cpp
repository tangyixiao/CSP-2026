#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2,s3,s4;
int p1,p2;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		p1++;
	}
	else{
		p2++;
	}
	if(s4[2]=='A'||s4[2]=='B'||s4[2]=='C'){
		p1++;
	}
	else{
		p2++;
	}
	if(s1==s3){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&(p1==2||p2==2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1==s3&&s2[0]==s4[0]&&s2[1]==s4[1]&&(p1==2||p2==2)){
		if(p1==2){
			if(s2[2]+1==s4[2]||s4[2]+1==s2[2]){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		if(p2==2){
			if(s2[2]+2==s4[2]||s4[2]+2==s2[2]){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0;
	}
	return 0;
}
//02 01A 02 01B
