#include <bits/stdc++.h>
using namespace std;
char a[10],b[10],x[10],y[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>a>>y>>b;
	if(x[0]==y[0]&&x[1]==y[1]){
		cout<<1;
		if(a[0]==b[0]&&a[1]==b[1]){
			cout<<1;
			if(abs(a[2]-b[2])<=2&&a[2]<'D'&&b[2]<'D'){
				cout<<1;
				if(abs(a[2]-b[2])==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				if(a[2]+b[2]=='D'+'F'){
					cout<<1<<1;
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
