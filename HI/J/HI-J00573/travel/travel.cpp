#include<bits/stdc++.h>
using namespace std;
using i32=int;
#define int long long
i32 main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,A,B;
	cin>>a>>b>>A>>B;
	if(a==A)
		cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
		
		
		
		
		
		
	if(b[0]==B[0]&&b[1]==B[1])
		cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
		
	
	
	
	
	
	if(b[2]=='A'){
		if(B[2]=='B'||B[2]=='C')
			cout<<"1";
		else
			cout<<"0";
	}else if(b[2]=='B'){
		if(B[2]=='A'||B[2]=='C')
			cout<<"1";
		else
			cout<<"0";
	}else if(b[2]=='C'){
		if(B[2]=='B'||B[2]=='A')
			cout<<"1";
		else
			cout<<"0";
	}else if(b[2]=='D'){
		if(B[2]=='F'){
			cout<<"11";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}else if(b[2]=='F'){
		if(B[2]=='D'){
			cout<<"11";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	
	
	
	
	
	
	
	if(b[2]=='B'||B[2]=='B')
		cout<<"1";
	else
		cout<<"0";
	return 0;
}
