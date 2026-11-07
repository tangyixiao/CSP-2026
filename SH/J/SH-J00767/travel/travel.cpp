#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	int rt=0,xt=0;
	char rs[4],xs[4],fzh;
	cin>>rt>>rs>>xt>>xs;
	if(xs[2]>rs[2]){
		fzh=xs[2];
		xs[2]=rs[2];
		rs[2]=fzh;
	}
	
	if(rt==xt){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	} 
	
	if((rs[0]==xs[0])&&(rs[1]==xs[1])){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	} 
	
	if((rs[2]=='D'||rs[2]=='F')&&(xs[2]=='A'||xs[2]=='B'||xs[2]=='C')){
		cout<<"00";
		return 0;
	}else{
		cout<<"1";
	}
	
	if(rs[2]=='F'||rs[2]=='B'||xs[2]=='B'){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
} 

