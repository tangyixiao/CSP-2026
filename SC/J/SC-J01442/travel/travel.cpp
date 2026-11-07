#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2;
	string s1,s2;
	freopen("travel.in","r",stdin);
	freoprn("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string line1[2]="",line2[2]="";
	line1[0]=s1[0];line1[1]=s1[1];
	line2[0]=s2[0];line2[1]=s2[1];
	if(c1==c2) {
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2 && line1==line2) {
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2 && line1==line2 && (s1[2]<='C' && s2[2]<='C' || s1[2]>='D' && s2[2]>='D')) {
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2 && line1==line2 && (s1[2]<='C' && s2[2]<='C' || s1[2]>='D' && s2[2]>='D')){
		if(s1[2]<='C' && s2[2]<='C') {
			if(s1[2]+1==s2[2] || s2[2]+1==s1[2]){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if(s1[2]>='D' && s2[2]>='D') {
			cout<<1;
		}else cout<<0;
		
	}else cout<<0;
	return 0;
}