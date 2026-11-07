#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	bool m=1,n,k;
	cin>>a>>x>>b>>y;
	
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		for(int i=0;i<=1;i++){
			if(x[i]!=y[i]){
				m=0;
				break;
			}
		}
		
		if(m==0){
			cout<<"0";
			n=0;
		}
		else{
			cout<<"1";
			if( (x[2]>='A'&&x[2]<='C'&&y[2]>='A'&&y[2]<='C') || ( (x[2]=='D'||x[2]=='F') && (y[2]=='D'||y[2]=='F') ) ){
				n=1;
			}
			else{
				n=0;
			}
		}
		if(n==0){
			cout<<"0";
			k=0;
		}
		else{
			cout<<"1";
			if( (abs(x[2]-y[2])==1&&n==1)  || (x[2]==y[2]&&abs( ( (x[0]-'0')*10+x[1]-'0' )-( (y[0]-'0')*10+y[1]-'0') )==1 ) ){
				k=1;
			}
		}
		if(k==0){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
		
	}
	return 0;
}
