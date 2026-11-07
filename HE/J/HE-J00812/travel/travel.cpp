#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<1;
		if(d[0]==c[0]&&d[1]==c[1]){
			cout<<1;
			if(c[2]<=67){
				if(d[2]<=67){
					cout<<1;
					if(abs(c[2]-d[2])==1){
						cout<<1;
					}else{
						cout<<0;
					}
				}
				else cout<<0<<0;
				}
			else {
				if(d[2]=='D'||d[2]=='F'){
					cout<<11;
				}
				else cout<<0<<0;
			}
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}
