#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1;
	char s1;
	char c2;
	char s2; 
	cin>>c1>>s1>>c2>>s2;
	if(c1=c2){
		cout<<'1';
		if(s1/16==s2/16){
			cout<<'1';
			if(s1%16<='C'&&s2%16<='C'){
				if(abs(s1-s2)==1){
					cout<<'11';
				}else{
					cout<<'10';
				}
			}if(s1%16>='D'&&s2%16>='D'){
				if(abs(s1-s2)==1){
					cout<<'11';
				}else{
					cout<<'10';
				}
			}
		}else{
			cout<<'000';
		}
	}else{
		cout<<'0000';
	}
	return 0;
}
