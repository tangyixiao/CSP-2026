#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2;
	string s1,s2,a;
    cin>>c1;
    cin>>s1;
    cin>>c2;
    cin>>s2;
	
	if(s1[0]==s2[0] and s1[1]==s2[1]){
		a[1]=1;
	}else{
		a[1]=0;
	}
	
	if(s1[2]=='A'&&'B'&&'C' and s2[2]=='A'&&'B'&&'C'){
		a[2]=1;
	}else if(s1[2]=='D'&&'F' and s2[2]=='D'&&'F'){
	    a[2]=1;
	}else{
		a[2]=0;
	}
	
	if(s1[2]=='D'&&'F' and s2[2]=='D'&&'F'){
	    a[2]=1;
    }else if(s1[2]=='A' and s2[2]=='B'){
    	a[2]=1;
	}else if(s1[2]=='B' and s2[2]=='A'&&'C'){
    	a[2]=1;
	}else if(s1[2]=='C' and s2[2]=='B'){
    	a[2]=1;
	}else{
		a[2]=0;
	}
	    
	if(c1==c2){
		a[0]=1;
	}else{
		a[0]=0;
		a[1]=0;
		a[2]=0;
		a[3]=0;
	}
	cout<<a[0]<<a[1]<<a[2]<<a[3];
} 