#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string a,b;
	long long c=0,d=0;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;;i++){
		if(s1[i]>='A'&&s1[i]<='F'){
		a=s1[i];	
			break;
		}
		else{
			c=c*10+s1[i]-'0';
		}
	}
	for(int i=0;;i++){
		if(s2[i]>='A'&&s2[i]<='F'){
		b=s2[i];	
			break;
		}
		else{
			d=d*10+s2[i]-'0';
		}
	}
	if(c==d){
		cout<<1;
		if(a[0]=='F'&&b[0]=='D'){
			cout<<1;
		}
		else if(a[0]=='D'&&b[0]=='F'){
			cout<<1;
		}
		else if((a[0]=='D'||a[0]=='F')&&b[0]>='A'&&b[0]<='C'){
			cout<<0<<0;
			return 0;
		}
		else if((b[0]=='D'||b[0]=='F')&&a[0]>='A'&&a[0]<='C'){
			cout<<0<<0;
			return 0;
		}
		else{
			cout<<1;
		}
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(abs(a[0]-b[0])==1){
		cout<<1;
	}
	else{
	cout<<0;
}	
	return 0;
}