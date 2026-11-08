#include<bits/stdc++.h>
using namespace std;
string r2,x2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,x,a,b;
	cin>>a>>r>>b>>x;
	if(a==b){
		cout<<1;
		r2=r[0]+r[1];
		x2=x[0]+x[1];
		if(r2==x2){
			cout<<1;
			if(r[2]>='D'&&x[2]>='D'){
				cout<<1;
			}
			else if(r[2]<'D'&&x[2]<'D'){
				cout<<1;
			}
			else{
				cout<<"00";
				return 0;
			}
			int A=r[2],B=x[2];
			int c=abs(A-B);
			if(c==1){
				cout<<1;
			}
			else{
				cout<<0;
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
