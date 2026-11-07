#include<bits/stdc++.h>
using namespace std;
struct ticket{int p,z;};
ticket translate(string s){
	if(s[2]=='F') s[2]--;
	if(s[0]=='0') return {s[1]-'0',s[2]-'A'};
	else return {(s[0]-'0')*10+s[1]-'0',s[2]-'A'};
}
bool check(int a,int b){
	return (a-3)*(b-3)>0;
}
void solve(){
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	ticket t1=translate(s1),t2=translate(s2);
	if(c1!=c2) cout<<"0000";
	else{
		if(t1.p!=t2.p) cout<<"1000";
		else{
			if(!check(t1.z,t2.z)) cout<<"1100";
			else{
				if(abs(t1.z-t2.z)==1) cout<<"1111";
				else cout<<"1110";
			}
		}
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

