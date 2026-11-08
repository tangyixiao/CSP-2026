#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	int cxr,phr,cxx,phx;
	char zhr,zhx;
	cin>>cxr;
	cin>>phr;
	cin>>zhr;
	cin>>cxx;
	cin>>phx;
	cin>>zhx;
	if(cxr==cxx){
		cout<<"1";
		if(phr==phx){
			cout<<"1";
			if(zhr=='A'||zhr=='B'||zhr=='C'&&zhx=='A'||zhx=='B'||zhx=='C'){
				cout<<"1";
				if(zhr!='B'&&zhx!='B'){
					cout<<"0";
					return 0;
				}
				else{
					cout<<"1";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
			if(zhr=='D'||zhr=='F'){
				if(zhr=='D'||zhr=='F'){
					cout<<"1";
					cout<<"1";
				}
				else{
					cout<<"00";
					return 0;
				}
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
