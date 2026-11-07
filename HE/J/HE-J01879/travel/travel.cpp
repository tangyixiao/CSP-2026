#include<bits/stdc++.h>
using namespace std;
string a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++) cin>>a[i];
	if(a[1]==a[3]) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(a[2][0]==a[4][0]&&a[2][1]==a[4][1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(a[2][2]=='A'||a[2][2]=='B'||a[2][2]=='C'){
		if(a[4][2]=='A'||a[4][2]=='B'||a[4][2]=='C') cout<<1;
		else{
			cout<<"00";
			return 0;
		}
	}
	if(a[2][2]=='D'||a[2][2]=='F'){
		if(a[4][2]=='D'||a[4][2]=='F') cout<<1;
		else{
			cout<<"00";
			return 0;
		}
	}
	else{
		if(a[2][2]=='A'&&a[4][2]=='B'){
			cout<<1;
			return 0;
		} 
		if(a[2][2]=='B'&&a[4][2]=='A'||a[4][2]=='C'){
			cout<<1;
			return 0;
		}
		if(a[4][2]=='C'&&a[4][2]=='C'){
			cout<<1;
			return 0;
		}
		if(a[4][2]=='D'&&a[4][2]=='F'){
			cout<<1;
			return 0;
		}
		if(a[4][2]=='F'&&a[4][2]=='D'){
			cout<<1;
			return 0;
		}
	}
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
