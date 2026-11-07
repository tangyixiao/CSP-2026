#include<bits/stdc++.h>
using namespace std;
string cr,cx;
char sr[10],sx[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr;
	for(int i=0;i<3;i++) cin>>sr[i];
	cin>>cx;
	for(int i=0;i<3;i++) cin>>sx[i];
	
	if(cr==cx){
		cout<<1;
		for(int i=0;i<1;i++){
			if(sr[i]==sx[i]&&sr[i+1]==sx[i+1]){
				cout<<1;
				if(sr[i+2]=='A'&&sx[i+2]=='B'||sx[i+2]=='A'&&sr[i+2]=='B'){
					cout<<1;
					if(sr[i+2]=='A'&&sx[i+2]=='B'||sx[i+2]=='A'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='C'&&sx[i+2]=='B'||sx[i+2]=='C'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='D'&&sx[i+2]=='F'||sx[i+2]=='D'&&sr[i+2]=='F')cout<<1;
					else cout<<0;
				}
				else if(sr[i+2]=='C'&&sx[i+2]=='B'||sx[i+2]=='C'&&sr[i+2]=='B'){
					cout<<1;
					if(sr[i+2]=='A'&&sx[i+2]=='B'||sx[i+2]=='A'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='C'&&sx[i+2]=='B'||sx[i+2]=='C'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='D'&&sx[i+2]=='F'||sx[i+2]=='D'&&sr[i+2]=='F')cout<<1;
					else cout<<0;
				}
				else if(sr[i+2]=='C'&&sx[i+2]=='A'||sx[i+2]=='C'&&sr[i+2]=='A'){
					cout<<1;
					if(sr[i+2]=='A'&&sx[i+2]=='B'||sx[i+2]=='A'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='C'&&sx[i+2]=='B'||sx[i+2]=='C'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='D'&&sx[i+2]=='F'||sx[i+2]=='D'&&sr[i+2]=='F')cout<<1;
					else cout<<0;
				}
				else if(sr[i+2]=='D'&&sx[i+2]=='F'||sx[i+2]=='D'&&sr[i+2]=='F'){
					cout<<1;
					if(sr[i+2]=='A'&&sx[i+2]=='B'||sx[i+2]=='A'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='C'&&sx[i+2]=='B'||sx[i+2]=='C'&&sr[i+2]=='B')cout<<1;
					else if(sr[i+2]=='D'&&sx[i+2]=='F'||sx[i+2]=='D'&&sr[i+2]=='F')cout<<1;
					else cout<<0;
				}
				else cout<<0<<0;
			}else{
				cout<<0<<0<<0;
			}
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	
	return 0;
}
