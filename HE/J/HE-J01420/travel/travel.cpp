#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ll ca,sa,cb,sc;
	char a,b;
	cin>>ca>>sa>>a>>cb>>sc>>b;
	if(ca==cb){
		cout<<1;
		if(sa==sc){
			cout<<1;
			if(a=='A'){
				if(b=='B'||b=='C'){
					cout<<1;
					if(b=='B')cout<<1;
					else cout<<0;
				}
			}else if(a=='B'){
				if(b=='A'||b=='C'){
					cout<<"11";
				}
				else cout<<"00";
			}else if(a=='C'){
				if(b=='B'||b=='A'){
					cout<<1;
					if(b=='B')cout<<1;
					else cout<<0;
				}else cout<<"00";
			}else if(a=='D'){
				if(b=='F'){
					cout<<"11";
					
				}else cout<<"00";
			}else if(a=='F'){
				if(b=='D'){
					cout<<"11";
					
				}else cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else cout<<"0000";
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
