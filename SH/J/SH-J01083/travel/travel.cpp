#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c,c2;
	string s,s2;
	cin>>c>>s>>c2>>s2;
	if(c==c2){
		cout<<'1';
		if(s[0]==s2[0] and s[1]==s2[1]){
			cout<<'1';
			if((s[2]-0<=67 and s2[2]-0<=67) or (s[2]-0>67 and s2[2]-0>67)){
				cout<<'1';
				if((s[2]-0>67 and s2[2]-0>67) or (s[2]=='B' or s2[2]=='B')){
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
	
	
	
	
	fclose(stdin);
	fclose(stdout);
}
