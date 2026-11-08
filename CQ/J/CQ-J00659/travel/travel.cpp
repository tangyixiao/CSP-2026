#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r_xy,d_xy,r_number,d_number;
	cin>>r_number>>r_xy>>d_number>>d_xy;
	if(r_number!=d_number){
		cout<<"0000";
		return 0;
	}
	else if(r_xy[0]!=d_xy[0]||r_xy[1]!=d_xy[1]){
		cout<<"1000";
		return 0;
	}
	else if('A'<=r_xy[2]&&r_xy[2]<='C'&&('D'==d_xy[2]||d_xy[2]=='F')){
		cout<<"1100";
		return 0;
	}
	else if('A'<=d_xy[2]&&d_xy[2]<='C'&&('D'==r_xy[2]||r_xy[2]=='F')){
		cout<<"1100";
		return 0;
	}
	else if(('D'==d_xy[2]&&r_xy[2]=='F')||('D'==r_xy[2]&&d_xy[2]=='F')){
		cout<<"1111";
		return 0;
	}
	else if(('A'==r_xy[2]||r_xy[2]=='C')&&d_xy[2]=='B'){
		cout<<"1111";
		return 0;
	}
	else if(('A'==d_xy[2]||r_xy[2]=='C')&&r_xy[2]=='B'){
		cout<<"1111";
		return 0;
	}
	else cout<<"1110";
	return 0;
}
