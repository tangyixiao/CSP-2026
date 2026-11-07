#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	char p1=s1[1],p2=s2[1];
	char l1=s1[2],l2=s2[2];
	int xt=0;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(p1==p2 && c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(p1==p2&&c1==c2&&(l1>='A' && l1<='C' && l2>='A' && l2<='C')||(l1>='D' && l1<='F' && l2>='D' && l2<='F')){
		cout<<1;
		xt=1;
	}else{
		cout<<0;
	}
	if(c1==c2 && p1==p2 && xt==1 && (l1==l2-1 || l1-1==l2)){
		cout<<1;
 	}else{
		cout<<0;
	}
	return 0;
}