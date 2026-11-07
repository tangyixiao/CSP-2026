#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			if(max(int(b[2]),int(d[2]))<68){
				cout<<1;
				if(max(int(b[2]),int(d[2]))-min(int(b[2]),int(d[2]))==1){
					cout<<1;
				}else{
					cout<<0;
					return 0;
				}
			}else if(max(int(b[2]),int(d[2]))==69&&min(int(b[2]),int(d[2]))==68){
				cout<<1;
				if(max(int(b[2]),int(d[2]))-min(int(b[2]),int(d[2]))==1){
					cout<<1;
				}else{
					cout<<0;
					return 0;
				}
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;	
	}
	return 0;
} 