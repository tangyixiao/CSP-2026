#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>c1>>c2>>c3>>c4;
	if(c1!=c3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	
	if(c2[0]==c4[0]&&c2[1]==c4[1]){
		cout<<1;
		char a=c2[2];
		char b=c4[2];
		if(a=='D'&&b!='F'){
			cout<<"00";
			return 0;
		}else if(a=='F'&&b!='D'){
			cout<<"00";
			return 0;
		}else if(b=='D'&&a!='F'){
			cout<<"00";
			return 0;
		}else if(b=='F'&&a!='D'){
			cout<<"00";
			return 0;
		}else if(a!='B'&&b!='B'){
			cout<<"10";
			return 0;
		}else{
			cout<<"11";
			return 0;
		}	
	}else{
		cout<<"000";
		return 0;
	}
	
	
	return 0;
} 