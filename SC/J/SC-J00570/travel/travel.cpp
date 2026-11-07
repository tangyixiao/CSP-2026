#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,a,b;
	char k,c;
	cin>>n>>m>>k>>a>>b>>c;
	if(n==a){
		cout<<1;
		if(m==b){
			cout<<1;
			if((k=='A'||k=='B'||k=='C')&&(c=='A'||c=='B'||c=='C')||(k=='D'||k=='F')&&(c=='D'||c=='F')){
				cout<<1;
				if(abs(k-c)==1)cout<<1;
				else cout<<0;				
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}