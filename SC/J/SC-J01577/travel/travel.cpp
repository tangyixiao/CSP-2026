#include<bits/stdc++.h>
using namespace std;
struct zw{
	int bh;
	string s;
};
bool d(char a,char b){
	if(a>b){
		return a-b;
	}
	else return b-a; 
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	zw r,x;
	cin>>r.bh>>r.s>>x.bh>>x.s;
	if(r.bh==x.bh)
		cout<<'1';
	else cout<<'0';
	string rl="",xl="";
	char xll,rll;
	for (int i=0;i<r.s.size();i++){
		if(i!=r.s.size()-1)
			rl+=r.s[i];
		else{
			rll=r.s[i];
		}
	}
	for (int i=0;i<x.s.size();i++){
		if(i!=x.s.size()-1)
			xl+=x.s[i];
		else{
			xll=x.s[i];
		}
	}
	if(xl==rl&&r.bh==x.bh)
		cout<<'1';
	else{
		cout<<'0';
	}
	if(xl==rl&&r.bh==x.bh&&(((xll=='F'||xll=='D')&&(rll=='F'||rll=='D'))||((xll=='A'||xll=='B'||xll=='C')&&(rll=='A'||rll=='B'||rll=='C')))){
		cout<<'1';
	}else{
		cout<<0;
	}
	if(xl==rl&&r.bh==x.bh&&(((xll=='F'||xll=='D')&&(rll=='F'||rll=='D'))||((xll=='A'||xll=='B'||xll=='C')&&(rll=='A'||rll=='B'||rll=='C')))&&abs(xll-rll)==1){
		cout<<'1';
		
	}else{
		cout<<'0';
	}
		
	return 0;
}