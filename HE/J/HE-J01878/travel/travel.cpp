#include<bits/stdc++.h>
using namespace std;
long long a[10001],b[10001],c[10001],d[10001];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int c1l=c1.size();
	int s1l=s1.size();
	int c2l=c2.size();
	int s2l=s2.size();
	if(c1l==2&&s1l==3&&c2l==2&&s2l==3){
	for(int i=0;i<2;i++){
		a[i+1]=c1[i]-'0';
	}
	for(int i=0;i<3;i++){
		b[i+1]=s1[i]-'0';
	}
	for(int i=0;i<2;i++){
		c[i+1]=c2[i]-'0';
	}
	for(int i=0;i<3;i++){
		d[i+1]=s2[i]-'0';
	}
	}
	int a3=a[1]*10+a[2];
	int b3=b[1]*10+b[2];
	int c3=c[1]*10+c[2];
	int d3=d[1]*10+d[2];
	
		if(a3==c3&&a3!=1&&a3!=16&&c3!=1&&c3!=16){
			cout<<"1";
			if(b3==d3){
				cout<<"1";
				if(b[3]<=19&&d[3]<=19){
					cout<<"1";
					if(b[3]==d[3]+1||b[3]==d[3]-1){
						cout<<"1";
					}
					if (b[3]!=d[3]+1&&b[3]!=d[3]-1){
						cout<<"0";
					}
				}
				if(b[3]>=20&&d[3]>=20){
					cout<<"1";
					if(b[3]==d[3]+1||b[3]==d[3]-1){
						cout<<"1";
					}
					if(b[3]!=d[3]+1&&b[3]!=d[3]-1){
						cout<<"0";
					}
				}
				if(b[3]<=19&&d[3]>=20){
					cout<<"0"<<"0";
				}
				if(b[3]>=20&&d[3]<=19){
					cout<<"0"<<"0";
				}
			}
			if(b3!=d3){
				cout<<"0"<<"0"<<"0";
			}
		}
		if(a3!=c3||a3==1||a3==16||c3==1||c3==16){
			cout<<"0"<<"0"<<"0"<<"0";
		}
	
	
	
	return 0;
}
