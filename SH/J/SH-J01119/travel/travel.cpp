#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1;
	string s1;
	string c2;
	string s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	int a[10000];
	int b[10000];
	int f=1;
	for(int i=0;i<2;i++){
		a[i]=s1[i]-'0';
		b[i]=s2[i]-'0';
	}
	for(int i=0;i<2;i++){
		if(a[i]!=b[i]){
			f=0;
			break;
		}
	}
	cout<<f;
	if(s1[2]-'D'<0 && s2[2]-'D'<0){
		cout<<1;
	}
	else if(s1[2]-'D'>=0 && s2[2]-'D'>=0){
		cout<<1;
	}
	else{
		cout<<0;
	}
	int x=0;
	if(s1[2]=='D' && s2[2]=='C'){
		x=1;
	}
	if(s1[2]=='C' && s2[2]=='D'){
		x=1;
	} 
	if(x==1){
		cout<<0;
	}
	else{
		if(s2[2]-s1[2]==1 || s2[2]-s1[2]==-1){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	return 0;
}
