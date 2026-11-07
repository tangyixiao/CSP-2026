#include <bits/stdc++.h>
using namespace std;
int cheak(string x,string y){
	int a=0,b=0;
	if(x=="A" || x=="B" || x=="C")
		a=1;
	if(y=="A" || y=="B" || y=="C")
		b=1;
	return (a==b);
}
int near(string x,string y){
	if(x=="A" && y=="B" || x=="B" && y=="A")
		return 1;
	if(x=="C" && y=="B" || x=="B" && y=="C")
		return 1;
	if(x=="D" && y=="F" || x=="F" && y=="D")
		return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string rs,xs,rst,xst,rl,xl;
	int r=0,x=0;
	cin>>r>>rs>>x>>xs;
	rst=rs[0]+rs[1];
	xst=xs[0]+xs[1];
	rl=rs[2];
	xl=xs[2];
	if(r==x)
		cout<<1;
	else
		cout<<0;
	if(r==x && rst==xst)
		cout<<1;
	else
		cout<<0;
	if(r==x && rst==xst && cheak(rl,xl))
		cout<<1;
	else
		cout<<0;
	if(r==x && rst==xst && cheak(rl,xl) && near(rl,xl))
		cout<<1;
	else
		cout<<0;
	return 0;
} 
