#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
long long tr1,tr2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	tr1=(a[0]-48)*10+(a[1]-48);
	tr2=(c[0]-48)*10+(c[1]-48);
	if(tr1==tr2){
		cout<<"1";
		tr1=(b[0]-48)*10+(b[1]-48);
		tr2=(d[0]-48)*10+(d[1]-48);
		if(tr1==tr2){
			cout<<"1";
			tr1=b[2]-64;
			tr2=d[2]-64;
			if(tr1==6){
				tr1=5;
			}
			if(tr2==6){
				tr2=5;
			}
			if(tr1<=3&&tr2>3){
				cout<<"00";
				return 0;
			}
			if(tr1>3&&tr2<=3){
				cout<<"00";
				return 0;
			}
			cout<<"1";
			if(tr1>tr2){
				if(tr1-tr2==1){
					cout<<"1";
					return 0;
					}
			}
			if(tr1<tr2){
				if(tr2-tr1==1){
					cout<<"1";
					return 0;
				}
			}
			cout<<"0";
			return 0;
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