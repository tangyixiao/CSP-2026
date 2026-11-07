#include<bits/stdc++.h>
using namespace std;
int x,y;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>a>>y>>b;
	if(x==y){
		cout<<'1';
		int t1=(a[0]-'0')*10+(a[1]-'0'),t2=(b[0]-'0')*10+(b[1]-'0');
		if(t1==t2){
			cout<<'1';
			if((a[2]<='C'&&b[2]<='C')||(a[2]>'D'&&b[2]>'D')){
				cout<<'1';
			}
			else{
				cout<<'0';
			}
			if((a[2]+1==b[2]||b[2]+1==a[2])&&((a[2]!='C'&&b[2]!='D')&&(a[2]!='D'&&b[2]!='C'))){
				cout<<'1';
			}
			else{
				cout<<'0';
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