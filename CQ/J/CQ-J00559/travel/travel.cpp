#include <bits/stdc++.h>
using namespace std;
string a,c,b,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int x,y;
	x=b[0]*10+b[1];
	y=d[0]*10+d[1];
	char z,k;
	z=b[2],k=d[2];
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	else {
		cout<<1;
		if(x!=y) {
			cout<<"000";
			return 0;
		}
		else{
			cout<<1;
			if(('A'<=z&&'C'>=z&&'A'<=k&&'C'>=k)||('D'<=z&&'F'>=z&&'D'<=k&&'F'>=k)){
				cout<<1;
				if(z==k+1||k==z+1) cout<<1;
				else{
					cout<<0;
				}
			}
			else {
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}
