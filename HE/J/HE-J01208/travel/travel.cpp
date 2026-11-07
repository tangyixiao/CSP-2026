#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,sr,cx,sx;//r的车厢座位，x的车厢座位
	//struct 
	cin>>cr>>sr>>cx>>sx;
	if(cr==cx){
		
		cout<<1;
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			cout<<1;//同排
			if((sr[2]<='C'&&sx[2]<='C')||(sr[2]>='D'&&sx[2]>='D')){
				cout<<1;//同侧
					if((sr[2]-sx[2]==1||sx[2]-sr[2]==1)&&((sr[2]!='D'&&sx[2]!='C')||(sr[2]!='C'&&sx[2]!='D')))cout<<1;
					else cout<<'0';
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
	return 0;
}
