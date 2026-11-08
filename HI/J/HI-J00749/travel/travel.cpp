#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	int c1,c2;
	char s1,s2,s3,n1,n2,n3;
	cin>>c1>>s1>>s2>>s3>>c2>>n1>>n2>>n3;

	
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0; 
	} 
	
	if(s2==n2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	
	
	if(s3=='A' && n3=='B'){
		cout<<"1";
	}else if(s3=='A' && n3=='C'){
		cout<<"1";
	}else if (s3=='A' && n3=='B'){
		cout<<"1";
	}else if(s3=='B' && n3=='A'){
		cout<<"1";
	}else if(s3=='B' && n3=='C'){
		cout<<"1";
	}else if(s3=='C' && n3=='A'){
		cout<<"1";
	}else if(s3=='C' && n3=='B'){
		cout<<"1";
	}else if(s3=='D' && n3=='E'){
		cout<<"1";
	}else if(s3=='E' && n3=='D'){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	if(s3=='E' && n3=='D'){
		cout<<"1";
	}else if(s3=='D' && n3=='E'){
		cout<<"1";
	}else if(s3=='B' && n3=='A'){
		cout<<"1";
	}else if (s3=='A' && n3=='B'){
		cout<<"1";
	}else if(s3=='B' && n3=='C'){
		cout<<"1";
	}else if(s3=='C' && n3=='B'){
		cout<<"1";
	} else{
		cout<<"0";
	}
	
	
	return 0;
} 
