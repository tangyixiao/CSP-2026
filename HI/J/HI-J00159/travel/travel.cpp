#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ans=0;
	string c,c1,s,s1;
	cin>>c>>c1>>s>>s1;
	if(c==s){
		cout<<1;
		bool b=true;
		for(int i=0;i<2;i++){
			if(c1[i]!=s1[i]){
				b=0;
				break;
			}
		}
		if(b){
			cout<<1;
			if(c1[2]=='D'){
				if(s1[2]=='F'){
					ans=1;
				}
			}else if(c1[2]=='F'){
				if(s1[2]=='D'){
					ans=1;
				}
			}else if(c1[2]=='C'){
				if(s1[2]=='B'){
					ans=1;
				}
			}else if(c1[2]=='B'){
				if(s1[2]=='C'||s1[2]=='A'){
					ans=1;
				}
			}else if(c1[2]=='A'){
				if(s1[2]=='B'){
					ans=1;
				}
			}
			if(c1[2]=='F'||c1[2]=='D'){
				if(s1[2]=='F'||s1[2]=='D'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
					cout<<1;
				}else{
					cout<<0;
				}
			}
			cout<<ans;
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	
	return 0;
} 
