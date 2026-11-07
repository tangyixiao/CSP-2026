#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
//	bool flag=true;
	if(a[0]==c[0] and a[1]==c[1]){
		cout<<1;
		if(b[0]==d[0] and b[1]==d[1] ){
			cout<<1;
			int k1=(b[2]-65);
			int k2=(d[2]-65);
			if((k1<3 and k2>2) or (k1>2 and k2<3)){
				cout<<"00";
			}
			else{
				cout<<1;
				if(abs(k1-k2)==1 ){
					cout<<1;
				}
				else{
					cout<<0;
				}
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