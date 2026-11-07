#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){
		if(b[0]==d[0]&&b[1]==d[1]){
			if((b[2]-'A'+1<=3&&d[2]-'A'+1<=3)||(b[2]-'A'+1>=4&&d[2]-'A'+1>=4)){
				if(abs(b[2]-d[2])==1){
					cout<<1111;
				}
				else{
					cout<<1110;
				}
			}
			else{
				cout<<1100;
			}
		}
		else{
			cout<<1000;
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
