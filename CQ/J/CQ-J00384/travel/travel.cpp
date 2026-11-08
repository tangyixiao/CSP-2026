#include<bits/stdc++.h>
using namespace std;
using ll=long long;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	string r,rt,x,xt;
	cin>>r>>rt>>x>>xt;
	int rr=stoi(r),xx=stoi(x);
	if(rr==xx)cout<<1;
	else{
		cout<<"0000";
		return 0;	
	} 
	int rk=0,xk=0;
	for(int i=0;i<2;i++){
		rk+=rt[i]-'0';
		rk*=10;
		xk+=xt[i]-'0';
		xk*=10;
	}
	if(rk==xk){
		cout<<1;
		char ry=rt[2],xy=xt[2];
		if((ry>='A'&&ry<='C')&&(xy>='A'&&xy<='C')){
			cout<<1;
			if((ry=='A'&&xy=='B')||(ry=='B'&&(xy=='A'||xy=='C'))||(ry=='C'&&xy=='B')){
				cout<<1;
			}else{
				cout<<0;
			}
		}else if((ry>='D'&&ry<='E')&&(xy>='D'&&xy<='E')){
			cout<<1;
			if((ry=='D'&&xy=='E')||(ry=='E'&&xy=='D')){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<"00";
		}
	}else{
		cout<<"000";
	}
	return 0;
}
