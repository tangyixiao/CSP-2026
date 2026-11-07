#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int pas[5]={0,0,0,1,1};
	int a,b;string c,d;cin>>a>>c>>b>>d;
	if(a==b){
		cout<<1;
		if(c[0]==d[0]&&c[1]==d[1]){
			cout<<1;
			if(pas[int(c[2]-'A')]==pas[int(d[2]-'A')]){
				cout<<1;
				if(abs(int(c[2]-d[2]))==1)cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
}
