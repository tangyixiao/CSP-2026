#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string Ra,Rb,Xa,Xb;
	cin>>Ra>>Rb>>Xa>>Xb;
	if(Ra==Xa){
		cout<<1;
		if(Rb[0]==Xb[0]&&Rb[1]==Xb[1]){
			cout<<1;
			if(Xb[2]=='D'||Xb[2]=='F'){
				if(Rb[2]=='D'||Rb[2]=='F'){
					cout<<"11";
				}
				else{
					cout<<"00";
				}
			}
			else{
				if(Rb[2]=='A'||Rb[2]=='B'||Rb[2]=='C'){
					cout<<1;
					if(abs(Rb[2]-Xb[2])==1){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<"00";
				}
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
    return 0;
}