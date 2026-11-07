#include<bits/stdc++.h>
using namespace std;
char c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1>='0'&&s1<='9'&&s2>='0'&&s2<='9'){
			if(s1==s2){
				cout<<"1";
				if(s1>='A'&&s1<='F'&&s2>='A'&&s2<='F'){
					if(s1=='D'&&s2=='F'||s1=='F'&&s2=='D'){
						cout<<"1";
						if(s1-s2==1||s2-s1==1){
							cout<<"1";
						}else{
							cout<<"0";
							return 0;
						}
					}else if(s1>='A'&&s1<='C'&&s2>='A'&&s2<='C'){
						cout<<"1";
						if(s1-s2==1||s2-s1==1){
							cout<<"1";
						}else{
							cout<<"0";
							return 0;
						}
					}
					else{
						cout<<"00";
						return 0;
					}
				}
			}else{
				cout<<"000";
				return 0;
			}
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
