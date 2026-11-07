#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c==cc){
		cout<<"1";
		int a=s[0]-'0'+s[1]-'0';
		int b=ss[0]-'0'+ss[1]-'0';
		if(a==b){
			cout<<"1";
			char aa=s[2];
			char bb=ss[2];
			
			if(aa<='C'&&bb<='C'||aa>'C'&&bb>'C'){
				cout<<"1";
				if(aa-1==bb||aa+1==bb){
					cout<<"1";
				}else{
					cout<<"0";
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
