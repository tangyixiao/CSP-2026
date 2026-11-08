#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c1,s1;
	cin>>c>>s>>c1>>s1;
	bool f = 0,f1 = 0,f2 = 0,f3 = 0;
	if(c==c1){
		f = 1;
		if(s[0]==s1[0]&&s[1]==s1[1]){
			f1 = 1;
			if(s[2]=='A'||s[2]=='B'||s[2]=='C'&&s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
				f2 = 1;
				if(s1[2]==s[2]+1||s1[2]==s[2]-1){
					f3 = 1; 
				}
			}else if(s[2]=='D'||s[2]=='F'&&s1[2]=='D'||s1[2]=='F'){
				f2 = 1;
				if(s1[2]==s[2]+1||s1[2]==s[2]-1){
					f3 = 1; 
				}
			}
		}
	}
	cout<<f<<f1<<f2<<f3; 
	return 0;
}
