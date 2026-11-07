#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool is(char c,char c2){
	if((c<='C'&&c2<='C')||(c>='D'&&c2>='D')){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<'1';
		string a=""+s1[0]+s1[1],b=""+s2[0]+s2[1];
		if(a==b){
			cout<<'1';
			if(is(s1[2],s2[2])){
				cout<<'1';
				if(abs(s1[2]-s2[2])==1){
					cout<<'1';
				}else{
					cout<<'0';
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000"; 
		}
	}else{
		cout<<"0000";
	} 
	return 0;
} 