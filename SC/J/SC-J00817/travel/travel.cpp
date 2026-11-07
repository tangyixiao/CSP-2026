#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	int u=0;
	if(a==c) {
		cout<<1;
		u++;
		int k=(b[0]-'0')*10+b[1]-'0';
		int k1=(d[0]-'0')*10+d[1]-'0';
		if(k==k1) {
			cout<<1;
			u++;
			char h,h1;
			h=b[2];
			h1=d[2];
			if((h<='C'&&h1<='C')||(h>'C'&&h1>'C')){
				cout<<1;
				u++;
				if(h-h1==1||h-h1==-1){
					cout<<1;
					u++;
				}
			}
		}
	}
	while(u<4){
		u++;
		cout<<0;
	}
	return 0;
}