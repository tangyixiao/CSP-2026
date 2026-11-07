#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int n1=(a[0]-'0')*10+a[1]-'0';
	int n2=(c[0]-'0')*10+c[1]-'0';
	if(n1!=n2){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
		int n3=(b[0]-'0')*10+b[1]-'0';
		int n4=(d[0]-'0')*10+d[1]-'0';
		if(n3!=n4){
			cout<<"000";
		}else{
			cout<<1;
			if((d[2]=='A'||d[2]=='B'||d[2]=='C')&&(b[2]=='A'||b[2]=='B'||b[2]=='C')){
				cout<<1;
			}else if((d[2]=='D'||d[2]=='F')&&(b[2]=='D'||b[2]=='F')){
				cout<<1;
			}else{
				cout<<0;
			}
			if((d[2]-b[2]==1&&d[2]!='D')||(d[2]-b[2]==-1&&b[2]!='D')){
				cout<<1;
			}else if(b[2]=='D'&&d[2]=='F'){
				cout<<1;
			}else if(b[2]=='F'&&d[2]=='D'){
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}
	return 0;
}