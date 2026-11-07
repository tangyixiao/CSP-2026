#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	int f=0;
	if(b.size()!=d.size()){
		f=1;
	}
	for(int i=0;i<b.size()-1;i++){
		if(b[i]!=d[i]){
			f=1;
			break;
		}
	}
	if(!f) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	int n=b.size(),m=d.size();
	if(b[n-1]>='A' && b[n-1]<='C' && d[m-1]>='A' && d[m-1]<='C'){
		cout<<"1";
	}
	else if(b[n-1]>='D' && b[n-1]<='F' && d[m-1]>='D' && d[m-1]<='F'){
		cout<<"11";
		return 0;
	}
	else{
		cout<<"00";
		return 0;
	}
	if((b[n-1]=='A' && d[m-1]=='B') || (b[n-1]=='B' && d[m-1]=='C') || (b[n-1]=='D' && d[m-1]=='F') || (b[n-1]=='B' && d[m-1]=='A') || (b[n-1]=='C' && d[m-1]=='B') || (b[n-1]=='F' && d[m-1]=='D')){
		cout<<"1";
	}
	else cout<<"0";
	return 0;
} 
