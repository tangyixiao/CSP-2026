#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a1,b1,a2,b2;
char c1,c2;

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	if(a1==a2){
		cout<<1;
		if(b1==b2){
			cout<<1;
			if((c2<'D' and c1<'D') or (c1>'C' and c2>'C')){
				cout<<1;
				if(abs(c2-c1)==1)cout<<1;
				else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
}