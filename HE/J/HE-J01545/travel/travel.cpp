#include<bits/stdc++.h>
using namespace std;
	string rfirst,rsecond,xfirst,xsecond;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rfirst>>rsecond>>xfirst>>xsecond;
	if(rfirst[0]==xfirst[0]&&rfirst[1]==xfirst[1]){
		cout<<1;
		if(rsecond[0]==xsecond[0]&&rsecond[1]==xsecond[1]){
			cout<<1;
			if(rsecond[2]<='C'&&xsecond[2]<='C'||rsecond[2]>'C'&&xsecond[2]>'C'){
				cout<<1;
				if(rsecond[2]==xsecond[2]+1||rsecond[2]==xsecond[2]-1){
					cout<<1;
				}else{
					cout<<0;
				}
				
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}
	else {
		cout<<"0000";	
	}
	return 0;
}
