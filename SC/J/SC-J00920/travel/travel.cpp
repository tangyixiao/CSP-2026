#include<bits/stdc++.h>
using namespace std;
int ans[4]={0};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int p=0;
	if(c1==c2){
		ans[0]=1;
		p=1;
	}
	int w=0;
	if(p==1){
		string a,b;
		a=s1[0]+s1[1];
		b=s2[0]+s2[1];
		if(a==b){
			ans[1]=1;
			w=1;
		}
	}
	
	int h=0;
	if(w==1){
		if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')){
			ans[2]=1;
			h=1; 
		}
		else if((s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')){
			ans[2]=1;
			h=1;
		}
		else if((s1[2]=='C'&&s2[2]=='B')||(s1[2]=='C'&&s2[2]=='A')){
			ans[2]=1;
			h=1;
		}
		else if(s1[2]=='D'&&s2[2]=='F'){
			ans[2]=1;
			h=1;
		}
		else if(s1[2]=='F'&&s2[2]=='D'){
			ans[2]=1;
			h=1;
		}
	}
	
	
	
	if(h==1){
		if(s1[2]=='A'&&s2[2]=='B'){
			ans[3]=1;
		}
		else if((s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')){
			ans[3]=1;
		}
		else if(s1[2]=='C'&&s2[2]=='B'){
			ans[3]=1;
		}
		else if(s1[2]=='D'&&s2[2]=='F'){
			ans[3]=1;
		}
		else if(s1[2]=='F'&&s2[2]=='D'){
			ans[3]=1;
		}
	}

	
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	
	return 0;
} 