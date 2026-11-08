#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a,b,c,d;
	cin>>a>>c>>b>>d;
	int x=c[0]-'0',y=d[0]-'0',z=c[1]-'0',s=d[1]-'0';
	int m=c[2]-'0'-16,n=d[2]-'0'-16;
	if(m==6) m=5;
	if(n==6) n=5;
	if(a==b){
		cout<<"1";
		if(x==y&&s==z){
			cout<<"1";
			if(m<=3&&n<=3||m>=4&&n>=4){
				cout<<"1";
				if(max(m,n)-min(m,n)==1){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";

	return 0;
}


