#include<bits/stdc++.h>
using namespace std;
int y=0;
int a1,b1;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a>>b1>>b;
	if(a1==b1){
		cout<<1;	
		y=1;
	} 
	else cout<<0;
	int t1=(a[0]-'0')*10+(a[1]-'0'),t2=(b[0]-'0')*10+(b[1]-'0');
	if(t1==t2&&y==1) cout<<1;
	else{
		cout<<0;y=0;	
	} 
	char c1=a[2],c2=b[2];
	if(((c1>='A'&&c1<='C'&&c2>='A'&&c2<='C')||(c1>='D'&&c1<='E'&&c2>='D'&&c2<='E'))&&y==1){
		cout<<1;
	} 
	else{
		cout<<0;y=0;	
	} 
	if(y==1&&(c1+1==c2||c1-1==c2)) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}