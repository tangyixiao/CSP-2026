#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	string c,s,c1,s1;
	cin>>c>>s>>c1>>s1;
	if(c!=c1){
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0; 
	}else{
		cout<<1;
		if(s[0] == s1[0] && s[1] == s1[1]){
			cout<<1;
			if(s[2]>='A'&&s[2]<='C'&&s1[2]>='A'&&s1[2]<='C'){
				cout<<1;
				if(s[2]-1 == s1[2]||s[2]+1 == s1[2]){
					cout<<1;
				}else cout<<0;
			}else if(s[2]>='D'&&s[2]<='E'&&s1[2]>='D'&&s1[2]<='E'){
				cout<<1;
				if(s[2]-1 == s1[2]||s[2]+1 == s1[2]){
					cout<<1;
				}else cout<<0;
			}else {
				cout << 0;
				cout<<0;
			}
		}else{
			cout<<0; 
			cout<<0;
			cout<<0;
		} 
	} 
	return 0;
}