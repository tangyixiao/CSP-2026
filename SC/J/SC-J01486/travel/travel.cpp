#include<bits/stdc++.h>
using namespace std;
int a,b;
string c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	cin>>a>>c>>b>>d;
	if(a==b){
		if(c[0]==d[0] && c[1]==d[1]){
			if((c[2]<=67 && d[2]<=67) || (c[2]>67 && d[2]>67)){
				if(abs(c[2]-d[2])==1){
					cout<<"1111";
					return 0;
				}	
				cout<<"1110";
				return 0;
			} 
			cout<<"1100";
			return 0;
		}
		cout<<"1000";
		return 0;
	}
	cout<<"0000";
	return 0;
}