#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int l1=0,l2=0;
	char a,b;
	for(int i=0;i<s1.size();i++){
		if(i==0){
			l1+=(s1[i]-'0')*10;
		}
		if(i==1){
			l1+=(s1[i]-'0');
		}
		if(i==2){
			a=s1[i];
		}
	}
	for(int i=0;i<s2.size();i++){
		if(i==0){
			l2+=(s2[i]-'0')*10;
		}
		if(i==1){
			l2+=(s2[i]-'0');
		}
		if(i==2){
			b=s2[i];
		}
	}
	if(c1==c2){
		cout<<1;
		if(l1==l2){
			cout<<1;
			if(a>='A' && a<='C' && b>='A' && b<='C' || a=='D' && b=='F' || a=='F' && b=='D'){
				cout<<1;
				if( a=='D' && b=='F' || a=='F' && b=='D'||a=='A' && b=='B' || a=='B' && b=='A' ||  a=='B' && b=='C' || a=='C' && b=='B'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}