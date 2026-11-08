#include<bits/stdc++.h>
using namespace std;
int main()
{	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}else{cout<<0<<0<<0<<0;return 0;} 
	int cnt=0;
	for(int i=0;i<=1;i++){
		if(b[i]!=d[i]){
			cnt=1;
		}
	}if(cnt==1){
		cout<<0<<0<<0;
	}
	if(cnt==0){
		cout<<1;
		if((b[2]<='C' && d[2]<='C') || (b[2]>'C' && d[2]>'C')){
			cout<<1;
			if(b[2]>'C' && d[2]>'C'){
				cout<<1;
			}else if(b[2]<='C' && d[2]<='C' && (b[2]=='B' || d[2]=='B')){
				cout<<1;
			}else{cout<<0;}
		}else{
			cout<<0;
			cout<<0;
		}
	}
	return 0;
}

