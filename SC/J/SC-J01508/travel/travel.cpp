#include<bits/stdc++.h>
 using namespace std;
  int cha(string s){
  	int n=0;
  	if(s[0]=='1') n+=10;
  	n+=s[1]-'0';
  	return n;
  } 
  int main(){
  	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
  	freopen("travel.in","r",stdin);
  	freopen("travel.out","w",stdout);
  	string s1,s2,c1,c2;
  	cin>>c1>>s1>>c2>>s2;
  	int nu1=0,nu2=0;
  	bool ok1=1;
	bool ans[5]={0};
  	int k=0;
  	nu1=cha(c1);
  	nu2=cha(c2);
  	if(nu1==nu2){
		ans[k]=1;
	}	
	else{
		ok1=0;
	}
	if(ok1==1){
		k++;
  		nu1=cha(s1);
  		nu2=cha(s2);
 	 	if(nu1==nu2){
		ans[k]=1;
	}	
	}
		else{
		ok1=0;
	}
if(ok1==1){
	k++;
	char r,x;
	r=s1[2];
	x=s2[2];
	if((r>'C'&&x>'C')||(r<='C'&&x<='C')){
		ans[k]=1;
	}
}
	else{
		ok1=0;
	}
	k++;
if(ok1==1){
	int h=s1[2]-s2[2];
	if(h<0) h=0-h;
	if(s1[2]<='C'){
		if(h==1){
			ans[k]=1;
		}
	}
	else{
		if(h==2){
			ans[k]=1;
		}
	}
}
	bool ok=0; 
  	for(int i=0;i<4;i++){
  		if(ans[i]==0){
  			ok=1;
		  }
  		if(ok){
  			cout<<0;
  			continue;
		 }
		 cout<<1;
	  }
	
  	return 0;
  }