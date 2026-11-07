#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int al=(b[0]-'0')*10+b[1]-'0',bl=(d[0]-'0')*10+d[1]-'0';
	if(a==c){
		cout<<1;
		if(al==bl){
			cout<<1;
			if((('A'<=b[2] && b[2]<='C')&&('A'<=d[2] && d[2]<='C'))||(('D'<=b[2] && b[2]<='F')&&('D'<=d[2] && d[2]<='F'))){
				cout<<1;
				if(b[2]-d[2]==1||b[2]-d[2]==-1)cout<<1;
					else cout<<"0";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 