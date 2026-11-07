#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int hj(int x){
	if(x<0){
		return -x;
	}
	else{
		return x;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
		if(b[0]==d[0]&&d[1]==b[1]){
			cout<<1;
			if(b[2]>='D'&&d[2]>='D'){
				cout<<1;
				if(hj(b[2]-d[2])==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				if(b[2]<'D'&&d[2]<'D'){
					cout<<1;
					if(hj(b[2]-d[2])==1){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<0<<0;
				}
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}