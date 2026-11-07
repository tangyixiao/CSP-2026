#include<bits/stdc++.h>
using namespace std;
string b,d;
int a,c;
int sum=0;
int K=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>a>>b>>c>>d;
	if(a==c)
	  cout<<"1";
	  if(a!=c){
	  	   	cout<<"0000";
	  	   	return 0;
			 }
	  for(int i=0;i<2;i++){
	  	if(b[0]==d[0]&&b[1]==d[1]){
	  		cout<<"1";
	  		sum=1;
	  		break;
		  }
		  else{
		  	cout<<"000";
		  	return 0;
		  }
	  		if(i==2)
	  	      cout<<"0";
	  	   
	  }
	  for(int i=0;i<3;i++){
	  	if(a==c&&sum==1&&(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F')))){
	  	    cout<<"1";
	  	    break;
	  	}
	  		else if(i==2)
	  	   cout<<"0";
	  	
	  }
	  for(int i=0;i<3;i++){
	  	if(a==c&&sum==1&&(((b[2]=='A'||b[2]=='B')&&(d[2]=='A'||d[2]=='B'))||((b[2]=='B'||b[2]=='C')&&(d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F')))){
	  	    cout<<"1";
	  	    break;
	  	}
	  	else if(i==2)
	  	   cout<<"0";
	  }
	  return 0;
}

