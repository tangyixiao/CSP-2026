#include<bits/stdc++.h>
using namespace std;
int a,b;
string s,s1;
bool pd1(){return (a==b);}
bool pd2(){return (s[0]==s1[0]&&s[1]==s1[1]);}
bool pd3(){return (s[2]<='C'?s1[2]<='C':s1[2]>='D');}
bool pd4(){return (abs(s1[2]-s[2])<2);}
int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>b>>s1;
	cout<<(pd1())<<(pd1()&&pd2())<<(pd1()&&pd2()&&pd3())<<(pd1()&&pd2()&&pd3()&&pd4()); 
	return 0;
} 
