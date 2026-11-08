#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool check(char a,char b){
	if(a=='A'&&b=='B'||b=='C'&&a=='B'||b=='D'&&a=='F'){
		return true;
	}else{
		return false;
	}
}
void solve(){
	cin>>a>>b>>c>>d;
	string e=b.substr(0,2),f=d.substr(0,2);
	if(a==c){
		cout<<"1";
		if(e==f){
			cout<<"1";
			if(b[2]<='C'&&d[2]<='C'||b[2]>'C'&&d[2]>'C'){
				cout<<"1";
				if(check(b[2],d[2])||check(b[2],d[2])){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000"; 
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}
//CQ-J00156 AK 
//11:37发现T1的细节错误
