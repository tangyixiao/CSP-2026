#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string cx,sx,cr,sr;
bool check(char s,char k){
	if((s=='A'||s=='B'||s=='C')&&(k=='A'||k=='B'||k=='C'))
		return 1;
	else if((s=='D'||s=='F')&&(k=='F'||k=='D'))
		return 1;
	return 0;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx>>sx>>cr>>sr;
	if(cx==cr){
		cout<<"1";
		if(sx[0]==sr[0]&&sx[1]==sr[1]){
			cout<<"1";
			if(check(sx[2],sr[2])){
				cout<<"1";
				if(abs(sx[2]-sr[2])==1) cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
