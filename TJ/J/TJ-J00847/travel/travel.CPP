#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,a1,b,b1;
	cin>>a>>a1>>b>>b1;
	bool f=0,f1=0,f2=0;
	
	if(a==b)cout<<1,f=1;
	else cout<<0;
	
	if(a1[1]==b1[1] and f){cout<<1; f1=1;}
	else cout<<0;
	
	if((a1[2]<='C' and b1[2]<='C' and f and f1) or (a1[2]>'C' and b1[2]>'C' and f and f1))cout<<1,f2=1;
	else cout<<0;
	
	if((a1[2]<='C' and b1[2]<='C') and abs(a1[2]-b1[2])==1 and f and f1 and f2)cout<<1;
	else if((a1[2]>'C' and b1[2]>'C') and abs(a1[2]-b1[2])==2)cout<<1;
	else cout<<0;
	 
	return 0;
	//ÄãºÃÑ½ÆßÆßÀÏÊ¦ 
}

