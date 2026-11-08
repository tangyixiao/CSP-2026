#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d,f=1;
	char ch1,ch2;
	cin>>a>>b>>ch1>>c>>d>>ch2;
	if(a==c){
		cout<<1;
	}
	else{
		f=0;
		cout<<0;
	}
	if(a==c&&b==d&&f==1){
		cout<<1;
	}
	else{
		f=0;
		cout<<0;
	}
	if(ch1+1==ch2&&f==1||ch1+2==ch2&&f==1||ch1-1==ch2&&f==1||ch1-2==ch2&&f==1){
		cout<<1;
	}
	else{
		f=0;
		cout<<0;
	}
	if(ch1-'0'+1==ch2-'0'&&f==1||ch1-'0'-1==ch2-'0'&&f==1)
	{
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
