#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<'1';
		int p=(b[0]-'0')*10+(b[1]-'0');
		int q=(d[0]-'0')*10+(d[1]-'0');
		if(p==q){
			cout<<'1';
			int i=b[2]-'A',j=d[2]-'A';
			if((i<=2&&j<=2)||(i>=3&&i<=4&&j<=4&&j>=3)){
				cout<<'1';
				if(abs(i-j)==1){
					cout<<'1';
				}
				else cout<<'0';
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 
