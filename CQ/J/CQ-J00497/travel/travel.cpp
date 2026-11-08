#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
namespace yyh{
	int a,b;
	string s,t;
	signed main(){
		cin>>a>>s>>b>>t;
		if(s[2]=='F')s[2]='E';
		if(t[2]=='F')t[2]='E';
		int fl=(a==b);
		cout<<fl;
		fl&=(s.substr(0,2)==t.substr(0,2));
		cout<<fl;
		fl&=((s[2]<='C'&&t[2]<='C')||(s[2]>'C'&&t[2]>'C'));
		cout<<fl;
		fl&=(abs((int)s[2]-(int)t[2])==1);
		cout<<fl<<endl;
		return 0;
	}
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	yyh::main();
	cerr<<"Time: "<<(double)clock()<<"ms";
	return 0;
}
/*
饺子皮老师，我还记得你
一字一句把我拉进OI里 

g++ -std=c++14 -O2 -Wl,-stack=100000000 travel.cpp -o travel.exe
travel.exe < travel1.in > a.out
fc a.out travel1.ans
travel.exe < travel2.in > a.out
fc a.out travel2.ans
travel.exe < travel3.in > a.out
fc a.out travel3.ans
travel.exe < travel4.in > a.out
fc a.out travel4.ans
travel.exe < travel5.in > a.out
fc a.out travel5.ans

*/
