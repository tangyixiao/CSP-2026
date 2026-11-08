#include<bits/stdc++.h> 
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[1]==c[1] and a[0]==c[0]){
		cout<<1;
		if(b[1]==d[1] and b[0]==d[0]){
			cout<<1;
			if((b[2]>='A' and b[2]<='C' and d[2]>='A' and d[2]<='C') or (b[2]>='D' and b[2]<='F' and d[2]>='D' and d[2]<='F')){
				cout<<1;
				if(b[2]=='A' and d[2]=='B' or b[2]=='B' and d[2]<='C' or d[2]>='A' and b[2]<='B' and d[2]>='B' and b[2]<='C'){
					cout<<1;
				}else if(b[2]=='D' and d[2]=='F' or b[2]=='F' and d[2]<='D'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
			}
		}
		else {
			cout<<0<<0<<0;
		}
	}
	else {
		cout<<0<<0<<0<<0;
	}
	return 0;
}
