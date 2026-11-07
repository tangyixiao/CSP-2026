#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,r1,x,x1;
	cin>>r>>r1>>x>>x1;
	int sum=0,sum1=0;
	if(r!=x) cout<<0<<0<<0<<0;
	else {
		if(r==x) cout<<1;
		sum=sum+r1[0]-48+r1[1]-48;
		sum1=sum1+x1[0]-48+x1[1]-48;
		if(sum==sum1){
			cout<<1;
		}else {
			cout<<0<<0<<0;return 0;
		}
		if(((r1[2]>='A'&&r1[2]<='C')&&(x1[2]>='A'&&x1[2]<='C'))||((r1[2]>='D'&&r1[2]<='F')&&(x1[2]>='D'&&x1[2]<='F'))){
			cout<<1;
			if(abs(r1[2]-x1[2])==1){
				cout<<1;
			}else cout<<0;
		}else{
			cout<<0<<0;
		}
	}
	return 0;
}
