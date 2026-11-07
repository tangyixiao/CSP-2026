#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1;string s1;string c2;string s2;
	cin>>c1>>s1>>c2>>s2;
	int f=0;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			f=1;
		}
		if(f==1){
			a[1]=0;break;
		}
	}
	if(f==0){
			a[1]=1;
	}f=0;
	
	if(a[1]==1) {
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				f=1;
			}
			if(f==1){
				a[2]=0;break;
			}
		}
		if(f==0){
			a[2]=1;
		}
	}
	else{
		a[2]==0;
	}
	
	f=0;
	
	if(a[2]==1){
	if(s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
		a[3]=1;f=1;
	}
	else if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')){
		a[3]=1;f=1;
	}
	else{
		a[3]=0;
	}
}
	if(f==1){
		if(s1[2]-s2[2]==1||s1[2]-s2[2]==-1){
			a[4]=1;
		}
		else{
			a[4]=0;
		}
	}
	else{
		a[4]=0;
	}
	for(int i=1;i<=4;i++){
		cout<<a[i];
	}
	return 0;
}
