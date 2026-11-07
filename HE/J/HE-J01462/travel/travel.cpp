#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int cnt;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(b[2]=='A'||b[2]=='B'||b[2]=='C') cnt++;
	if(d[2]=='A'||d[2]=='B'||d[2]=='C') cnt++;
	if(a==c){
		if(b[0]==d[0]&&b[1]==d[1]){
			if(cnt==2||cnt==0){
				if(b[2]=='D'&&d[2]=='F'||d[2]=='D'&&b[2]=='F') cout<<"1111";
				else if(b[2]==d[2]-1||b[2]==d[2]+1) cout<<"1111";
				else cout<<"1110";
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
