#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string r1,x1;
	string r2,x2;
	string c="C";
	cin>>r1>>r2>>x1>>x2;
	string r=r2.substr(2),x=x2.substr(2);
	if(r1==x1){
		cout<<1;
		if(r2.substr(0,2)==x2.substr(0,2)){
			cout<<1;
			if((r2.substr(2)<=c&&x2.substr(2)<=c)||(r2.substr(2)>c&&x2.substr(2)>c)){
				cout<<1;
				if((r=="A"&&x=="B")||(r=="B"&&x=="C")||(r=="D"&&x=="F")){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0;
				cout<<0;
			}
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
		
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		
	}
}