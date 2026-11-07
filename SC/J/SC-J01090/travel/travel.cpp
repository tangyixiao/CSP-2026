#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a[1]-c[1]==0){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(b[1]-d[1]==0){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	
	if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
		if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
			cout<<"1";
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	else{
		if(d[2]=='D'||d[2]=='F'){
			cout<<"1";
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	if((b[2]+1==d[2]&&b[2]!='C')||(b[2]-1==d[2]&&b[2]!='D')){
		cout<<"1";
	}
	else{
		cout<<"0";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}