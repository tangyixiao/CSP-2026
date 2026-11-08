#include<bits/stdc++.h>
using namespace std;
string q;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<10;i++){
		cin>>q[i];
	}
	if(q[0]==q[5]and q[1]==q[6]){
		cout<<"1";	
		if(q[2]==q[7]and q[3]==q[8]){
			cout<<"1";
			if(q[4]!=q[9] ){
				cout<<"1";
				if(q[9]==q[4]+1 or q[9]==q[4]-1){
					cout<<"1";
				}
				else cout<<"0";return 0;
			}
			else cout<<"00"; return 0;
		}
		else cout<<"000";return 0;
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 
