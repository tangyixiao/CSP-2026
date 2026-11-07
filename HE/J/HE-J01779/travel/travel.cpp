#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c1,s1;
	int k,k1;
	char y,y1;
	bool flag=false,flag1=false;
	cin>>c>>s>>c1>>s1;
	if(c==c1){
		cout<<1;
		flag=true;
	}else{
		cout<<0;
	}
	if((s[0]==s1[0] && c[1]==c1[1]) &&flag){
		cout<<1;
		flag1=true;
	}else{
		cout<<0;
	}
	y=s[2];
	y1=s1[2];
	if(flag1 && ((y>='D' && y1>='D')||(y<'D' && y1<'D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	int num=(s[0]-'0')*10+(s[1]-'0'),num1=(s1[0]-'0')*10+(s1[1]-'0');
	k=y;
	k1=y1;
	if(((num==num1+1 || num==num1-1 )|| (num-1==num1 || num+1==num1)) && (k==k1 || (k==k1+1 || k==k1-1))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
