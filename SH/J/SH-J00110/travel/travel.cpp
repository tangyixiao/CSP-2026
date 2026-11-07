#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	set<char> s1,s2;
	s1.insert('D');
	s1.insert('F');
	s2.insert('A');
	s2.insert('B');
	s2.insert('C');
	int Rtrain,Rlie;
	char Rrow;
	int Xtrain,Xlie;
	char Xrow;
	string s;
	cin>>s;
	Rtrain=(s[0]-'0')*10+(s[1]-'0');
	cin>>s;
	Rlie=(s[0]-'0')*10+(s[1]-'0');
	Rrow=s[2];
	
	cin>>s;
	Xtrain=(s[0]-'0')*10+(s[1]-'0');
	cin>>s;
	Xlie=(s[0]-'0')*10+(s[1]-'0');
	Xrow=s[2];
	
//	cout<<Rtrain<<' '<<Rlie<<' '<<Rrow<<' '<<Xtrain<<' '<<Xlie<<' '<<Xrow<<'\n';
	
	if(Rtrain==Xtrain){
		putchar('1');
	}else{
		puts("0000");
		return;
	}
	
	if(Rlie==Xlie){
		putchar('1');
	}else{
		puts("000");
		return;
	}
	
	if((s1.find(Rrow)!=s1.end()&&s1.find(Xrow)!=s1.end())||
	   (s2.find(Rrow)!=s2.end()&&s2.find(Xrow)!=s2.end())){
	   	putchar('1');
	   	
	   	if((s1.find(Rrow)!=s1.end()&&s1.find(Xrow)!=s1.end())
		   ||((s2.find(Rrow)!=s2.end()&&s2.find(Xrow)!=s2.end())&&!(((Xrow=='A')&&(Rrow=='C'))||((Rrow=='A')&&(Xrow=='C')))))
	   		puts("1");
	   	else
	   		puts("0");
	}else{
		puts("00");
		return;
	}
}

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _T=1;//cin>>_T;
	while(_T--){
		solve();
	}
}
