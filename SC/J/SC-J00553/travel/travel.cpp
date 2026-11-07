#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in ","r",stdin);
	freopen("travel.out ","w",stdout);
	string c,s,e,q;
	cin>>c>>s>>e>>q;
//	for(int i=1;;i++){
			if(c==e){
		cout<<1;
		if(s[0]==q[0]&&s[1]==q[1]){
			cout<<1;
			if(s[2]=='A'||s[2]=='B'||s[2]=='C'&&q[2]=='A'||q[2]=='B'||q[2]=='C'||s[2]=='D'||s[2]=='F'&&q[2]=='D'||q[2]=='F'	){
				cout<<1;
				if(s[2]+1==q[2]+0&&s[2]!='C'||q[2]+1==s[2]+0&&q[2]!='C'||s[2]=='D'&&q[2]=='F'||s[2]=='D'&&q[2]=='F'){
					cout<<1;
					//break;
				}else{
					cout<<0;
					//break;
				}
			}else{
				cout<<0<<0;
				//break;
			}
		
		}else{
			cout<<0<<0<<0;
			//break;
		}
	}else{
		cout<<0<<0<<0<<0;
		//break;
	}
	//}

	
	
}