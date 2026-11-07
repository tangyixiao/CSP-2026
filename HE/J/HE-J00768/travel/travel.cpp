#include<bits/stdc++.h>
using namespace std;
char c1[10],c2[10];
char s1[10],s2[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[10]={0};
	for(int i=1;i<=2;i++){
		cin>>c1[i];
	}
	for(int i=1;i<=3;i++){
		cin>>s1[i];
	}
    for(int i=1;i<=2;i++){
		cin>>c2[i];
	}
	for(int i=1;i<=3;i++){
		cin>>s2[i];
	}
	for(int i=1;i<=1;i++){
		if(c1[i]==c2[i]&&c1[i+1]==c2[i+1]){
			a[1]=1;
		}
		else {
			cout<<0000;
			return 0;
		}// chexiang
	}
	for(int i=1;i<=1;i++){
		if(s1[i]==s2[i]&&s2[i+1]==s1[i+1]){
			a[2]=1;
		}
		else {
			cout<<1000;
			return 0;
		}//pai
	}
	if(s1[3]=='A'&&s2[3]=='B'){
		a[3]=1;
		a[4]=1;
	}
	if(s1[3]=='A'&&s2[3]=='C'){
		a[3]=1;
	}
	if(s1[3]=='B'&&s2[3]=='A'){
		a[3]=1;
		a[4]=1;
	}
	if(s1[3]=='B'&&s2[3]=='C'){
		a[3]=1;
		a[4]=1;
	}
	if(s1[3]=='C'&&s2[3]=='B'){
		a[3]=1;
		a[4]=1;
	}
	if(s1[3]=='C'&&s2[3]=='A'){
		a[3]=1;
	}
	if(s1[3]=='D'&&s2[3]=='F'){
		a[3]=1;
		a[4]=1;
	}
	if(s1[3]=='F'&&s2[3]=='D'){
		a[3]=1;
		a[4]=1;
	}
	for(int i=1;i<=4;i++){
		cout<<a[i];
	}	
	return 0;
}
