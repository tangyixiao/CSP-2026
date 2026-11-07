#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
long long f=0;
int main(){
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
    if((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F')){
    	cout<<1;
    	if(b[2]=='D'||b[2]=='F'){
    		f=1;
		}else{
			f=0;
		}
	}else{
		cout<<0;
		cout<<0;
		return 0;
	}
	if(f==1){
		cout<<1;
	}else{
		if(b[2]-d[2]==1||b[2]-d[2]==-1){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	return 0;
}