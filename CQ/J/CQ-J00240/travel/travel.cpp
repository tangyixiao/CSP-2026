#include<bits/stdc++.h>
using namespace std;
namespace lp{
	string s,t,u,v;
	const int a[]={0,0,0,1,1};
	bool check(char x,char y){
		if(x>y)swap(x,y);
		return ((x=='A' && y=='B') || (x=='B' && y=='C') || (x=='D' && y=='F'));
	}
	int main(){
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0),cout.tie(0);
		cin>>s>>t>>u>>v;
		if(s==u){
			if(t.substr(0,2)==v.substr(0,2)){
				if(a[t[2]-'A']==a[v[2]-'A']){
					if(check(t[2],v[2]))cout<<"1111";
					else cout<<"1110";
				}
				else cout<<"1100";
			}
			else cout<<"1000";
		}
		else cout<<"0000";
		return 0;
	}
}
int main(){
	lp::main();
	return 0;
}

