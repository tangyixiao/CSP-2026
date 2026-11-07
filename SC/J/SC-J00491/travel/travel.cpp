#include<bits/stdc++.h> 
#define int long long
using namespace std;
string sa,sr,sc,sx; 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa>>sr>>sc>>sx;
	int a=sa[1]-'0'+10*(sc[0]-'0');
	int b=sc[1]-'0'+10*(sc[0]-'0');
	if(a==b){
		cout<<1;
		int x=sx[1]-'0'+10*(sx[0]-'0'),r=sr[1]-'0'+10*(sr[0]-'0');
		if(x==r){
			cout<<1;
			if(sx[2]>='A'&&sx[2]<='C'){
				if(sr[2]>='A'&&sr[2]<='C'&&sx[2]!=sr[2]){
					cout<<1;
					if(abs(sr[2]-sx[2])==1){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<"00";
				}
			}else{
				if((sx[2]=='D'&&sr[2]=='F')||(sx[2]=='F'&&sr[2]=='D')){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}