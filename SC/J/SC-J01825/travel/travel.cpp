#include<bits/stdc++.h>
using namespace std;
string r,x,sr,sx;
int c,s,cc;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>sr>>x>>sx;
	if(r!=x){
		cout<<"0000";
		return 0;
	}else cout<<"1";
	
	
	if(sr[0]==sx[0]&&sr[1]==sx[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	
	
	if((sr[2]>'c'&&sx[2]>'c')||(sr[2]<='c'&&sx[2]<='c')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(sr[0]==sx[0] && sr[2]==sx[2] &&((sr[1]-sx[1])==1||(sr[1]-sx[1])==-1)){
		cout<<"1";
		return 0;
	}
	if(sr[0]==sx[0] && sr[1]==sx[1] &&((sr[2]-sx[2])==1||(sr[2]-sx[2])==-1)){
		cout<<"1";
		return 0;
	}
	cout<<"0";
	
	return 0;
}