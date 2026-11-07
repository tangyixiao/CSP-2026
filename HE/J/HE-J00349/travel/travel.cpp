#include<bits/stdc++.h> 
using namespace std;
string a,b,c,d;
long long n;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	for(int i=0;i<a.size();i++){
		if(a[i]!=c[i]){
			cout<<"0000";
			return 0;
		}else{
			n++;
		}
	}
	if(n==a.size()){
		cout<<1;
		n=0;
	}
	for(int i=0;i<b.size()-1;i++){
		if(b[i]==d[i]){
			n++;
		}
	}
	if(n==2){
		cout<<1;
		if((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||(b[2]=='D'&&d[2]=='F')||(d[2]=='D'&&b[2]=='F')){
			cout<<1;
			if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'&&min(b[2],d[2])+1==max(b[2],d[2])){
				cout<<1;
			}
			else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'&&min(b[2],d[2])+1==max(b[2],d[2])){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<"00";
			return 0;
		}
	}else{
		cout<<"000";
	}
	return 0;
}
