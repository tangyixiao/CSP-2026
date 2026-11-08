#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	cin>>a>>b>>x>>y;
	if(a==x){
		cout<<"1";
		string n=b.substr(0,2);
		string m=y.substr(0,2);
		if(n==m){
			cout<<"1";
			char xr=b[2];
			char sx=y[2];
			if((xr<='C' && sx<='C') || (xr>='D' && sx>='D')){
				cout<<"1";
				if(xr+1==sx || xr-1==sx){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00"<<endl;
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000"<<endl;
	}
	return 0;
}
