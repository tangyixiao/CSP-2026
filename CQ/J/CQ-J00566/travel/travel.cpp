#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string x,y;
	cin>>a>>x>>b>>y;
	if(a==b){
		cout<<1;
		if(x[0]==y[0] and x[1]==y[1]){
			cout<<1;
			if((x[2]=='F' and y[2]=='D') or (x[2]=='D' and y[2]=='F') or (x[2]=='A' and (y[2]=='B' or y[2]=='C')) or (x[2]=='B' and (y[2]=='A' or y[2]=='C')) or (x[2]=='C' and (y[2]=='B' or y[2]=='A'))){
				cout<<1;
				if(x[2]=='B' or y[2]=='B')cout<<1;
				else cout<<0;
			}
			else{
				cout<<"00";
				return 0;
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
