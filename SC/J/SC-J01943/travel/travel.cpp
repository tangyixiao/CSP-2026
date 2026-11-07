#include<bits/stdc++.h>
using namespace std;
string s1,s2,ss1,ss2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>ss1>>ss2;
	if(s1==ss1){
		cout<<1;
		if(s2.substr(0,2)==ss2.substr(0,2)){
			cout<<1;
			char c1=s2[2],c2=ss2[2];
			if((c1<='C'&&c2<='C')||(c1>'C'&&c2>'C')){
				cout<<1;
				if(c1+1==c2||c2+1==c1){
					cout<<1;
				}else cout<<"0";
				
			}else cout<<"00";
			
			
		}else cout<<"000";
		
	}else cout<<"0000";
	return 0;
}