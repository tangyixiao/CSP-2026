#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
string  ans;
int k1(char x){
	if(x=='A'||x=='B'||x=='C') return 1;
	else  return 2;
}
bool check(char x,char y){
	if(x>y) swap(x,y);
	if(x+1==y) return true;
	else return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		string  b1=b.substr(0,2),d1=d.substr(0,2); 
		if(b1==d1){
			if(k1(b[2])==k1(d[2])){
				if(check(b[2],d[2])){
					ans="1111";
				}
				else ans="1110";
			}
			else ans="1100";
		}
		else ans="1000";
	}
	else ans="0000";
	cout<<ans;
	return 0;
} 
