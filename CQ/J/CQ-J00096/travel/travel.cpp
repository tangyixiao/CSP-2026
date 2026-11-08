#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool f=1;
	if(c1!=c2){
		cout<<0;
		f=0;
	}else cout<<1;
	if(f==0)cout<<0;
	else if(s1[0]==s2[0] && s1[1]==s2[1]){
		cout<<1;
		f=1;
	}else{
		cout<<0;
		f=0;
	}
	char a=s1[2],b=s2[2];
	if(f==0)cout<<0;
	else{
		if((a=='A' || a=='B' || a=='C') && (b=='D' || b=='E')){
			cout<<0;
			f=0;
		}else if((b=='A' || b=='B' || b=='C') && (a=='D' || a=='E')){
			cout<<0;
			f=0;
		}else cout<<1;
	}
	if(f==0)cout<<0;
	else{
		if(a-b==1 || b-a==1)cout<<1;
		else cout<<0;
	}
	return 0;
}
