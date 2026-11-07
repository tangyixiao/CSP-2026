#include<bits/stdc++.h>
using namespace std;
string a,a2,b,b2;
int sum;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a2>>b>>b2;
	for(int i=0;i<=1;++i){
		if(a[i]==b[i]) sum++;
	}
	if(sum==2){
		cout<<1;
		sum=0;
		for(int i=0;i<=1;i++){
			if(a2[i]==b2[i]) sum++;
		}
		if(sum==2){
			cout<<1;
			sum=0;
			if(a2[2]=='A'&&b2[2]=='B') sum++;
			else if(a2[2]=='A'&&b2[2]=='C') sum++;
			else if(a2[2]=='B'&&b2[2]=='A') sum++;
			else if(a2[2]=='B'&&b2[2]=='C') sum++;
			else if(a2[2]=='C'&&b2[2]=='A') sum++;
			else if(a2[2]=='C'&&b2[2]=='B') sum++;
			else if(a2[2]=='D'&&b2[2]=='F') sum++;
			else if(a2[2]=='F'&&b2[2]=='D') sum++;
			if(sum==1){
				cout<<1;
				if(abs(a2[2]-b2[2])==1){
					sum=0;
					if(a2[2]=='C'&&b2[2]=='D')sum=0;
					else if(a2[2]=='D'&&b2[2]=='C')sum=0;
					else sum++;
					if(sum==1)cout<<1;
					else cout<<0;
				}
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}
