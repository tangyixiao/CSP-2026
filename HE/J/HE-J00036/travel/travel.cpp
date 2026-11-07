#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	int a=0,b=0,c=0,d=0;
	char x,y;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<s1.size();i++){
		a=a*10+s1[i]-'0';
	}
	for(int i=0;i<s2.size()-1;i++){
		b=b*10+s2[i]-'0';
	}
	for(int i=0;i<s3.size();i++){
		c=c*10+s3[i]-'0';
	}
	for(int i=0;i<s4.size()-1;i++){
		d=d*10+s4[i]-'0';
	}
	if(a!=c){
		cout<<0<<' '<<0<<' '<<0<<' '<<0;
		return 0;
	}
	if(b!=d){
		cout<<1<<' '<<0<<' '<<0<<' '<<0;
		return 0;
	}
	x=s2[s2.size()-1];
	y=s4[s4.size()-1];
	cout<<1<<' '<<1<<' ';
	if(b==d){
		if(x=='A'&&y=='B'||y=='C'){			
			cout<<1<<' ';
		}else if(x=='B'&&y=='A'||y=='C'){			
			cout<<1<<' ';
		}else if(x=='C'&&y=='B'||y=='A'){
			cout<<1<<' ';
		}else if(x=='D'&&y=='F'){
			cout<<1<<' ';
		}else if(x=='F'&&y=='D'){
			cout<<1<<' ';
		}else{
			cout<<0<<' ';
		}
	}else{
		cout<<0<<' ';
	}
	if(b==d){
		if(x=='A'&&y=='B'){
			cout<<1;
		}else if(x=='B'&&y=='A'||y=='C'){
			cout<<1;
		}else if(x=='C'&&y=='B'){
			cout<<1;
		}else if(x=='D'&&y=='F'){
			cout<<1;
		}else if(x=='F'&&y=='D'){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
