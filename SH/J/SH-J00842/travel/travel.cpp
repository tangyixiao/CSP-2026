#include<bits/stdc++.h>
using namespace std;
string a1,a2,a3,a4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>a3>>a4;
	if(a1==a3){
		cout<<1;
		if(a2[0]==a4[0]&&a2[1]==a4[1]){
			cout<<1;
			if(a2[2]<='C'&&a4[2]<='C'||a2[2]>='D'&&a4[2]>='D'){
				cout<<1;
				if(a2[2]=='D'&&a4[2]=='F'||a2[2]=='F'&&a4[2]=='D'){
					cout<<1;
				}else if(max(a2[2],a4[2])>='D'){
					cout<<0;
				}else if(abs(a2[2]-a4[2])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}
//Trick||Treat!
