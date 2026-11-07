#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int w[100];
	w['A']=1;
	w['B']=2;
	w['C']=3;
	w['D']=4;
	w['F']=5;
	int c1,c2,p1,p2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1[0]=='0'){
		p1=s1[1]-48;
	}else{
		p1=10+s1[1]-48;
	}
	if(s2[0]=='0'){
		p2=s2[1]-48;
	}else{
		p2=10+s2[1]-48;
	}
	if(c1==c2){
		cout<<1;
		if(p1==p2){
			cout<<1;
			if((w[s1[2]]<=3 && w[s2[2]]<=3 )
			|| (w[s1[2]]>=4 && w[s2[2]]>=4)){
				cout<<1;
				if(abs(w[s1[2]]-w[s2[2]])==1){
					cout<<1;
				}else cout<<0;
			}else cout<<0<<0;
		}else cout<<0<<0<<0;
	}else cout<<0<<0<<0<<0;
	return 0;
}