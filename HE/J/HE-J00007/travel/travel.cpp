#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	char b[10],d[10];
	cin>>a;
	for(int i=0;i<3;i++)cin>>b[i];
	cin>>c;
	for(int i=0;i<3;i++)cin>>d[i];
	if(a==c){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			if(b[2]=='A'){
				if(d[2]=='B')cout<<1<<1;
				else if(d[2]=='C')cout<<1<<0;
				else cout<<0<<0;
			}
			else if(b[2]=='B'){
				if(d[2]=='A'||d[2]=='C')cout<<1<<1;
				else cout<<0<<0;
			}
			else if(b[2]=='C'){
				if(d[2]=='B')cout<<1<<1;
				else if(d[2]=='A')cout<<1<<0;
				else cout<<0<<0;
			}
			else if(b[2]=='D'){
				if(d[2]=='F')cout<<1<<1;
				else cout<<0<<0;
			}
			else if(b[2]=='F'){
				if(d[2]=='D')cout<<1<<1;
				else cout<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
			return 0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	return 0;
}
