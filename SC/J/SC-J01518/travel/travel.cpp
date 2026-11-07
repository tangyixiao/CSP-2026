#include<bits/stdc++.h>
using namespace std;
#define fo(i,begin,end) for(int i=begin;i<=end;++i)
string s1,s2,t1,t2;
bool is(char c){return c>='A'&&c<='C';}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>t1>>s2>>t2;
	if(s1==s2){
		cout<<1;
		if(t1[0]==t2[0]&&t1[1]==t2[1]){
			cout<<1;
			if(is(t1[2])==is(t2[2])){
				cout<<1;
				if(abs(t1[2]-t2[2])==1) cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}