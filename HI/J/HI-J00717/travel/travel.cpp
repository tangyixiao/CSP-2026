#include<bits/stdc++.h>
using namespace std;
string s[5];
bool n=0,m=0,x=0,v=0;
void solve(){
	if(s[0]==s[2]){
		n=1;
    }
    if(n==1){
    	if(s[1][0]==s[3][0]&&s[1][1]==s[3][1])m=1;
	}
	if(m==1){
		if(s[1][2]=='D'||s[1][2]=='F'){
			if(s[3][2]=='D'||s[3][2]=='F'){
				x=1;
				v=1;
				return;
			}
		}
		else{
			if(s[3][2]>='A'&&s[3][2]<='C'){
				x=1;
			}
		}
	}
	if(x==1){
		if(s[3][2]-s[1][2]<=1&&s[3][2]-s[1][2]>=-1){
			v=1;
		}
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<4;i++){
		cin >> s[i];
	}
	solve();
	cout << n << m << x << v;
	return 0;
}
