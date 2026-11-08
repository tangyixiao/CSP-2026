#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	cin>>a>>x>>b>>y;
	int sum = abs(x[2]-'0'-(y[2]-'0'));
	if(a[1]==b[1]&&a[0]==b[0]){
		cout<<1;
		if(x[1]==y[1]&&x[0]==y[0]){
			cout<<1;
			if(x[2]<='C'&&y[2]<='C'){
				cout<<1;
				if(sum==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(x[2]>='D'&&y[2]>='D'){
				cout<<1;
				if(sum==2){
					cout<<1;
				}else{
					cout<<0;
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
