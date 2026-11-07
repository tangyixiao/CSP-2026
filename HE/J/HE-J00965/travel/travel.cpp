#include<bits/stdc++.h>
using namespace std;
char a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=5;i++) cin>>a[i];
	for(int i=1;i<=5;i++) cin>>b[i];
	int x=(a[1]-'0')*10+a[2]-'0',y=(b[1]-'0')*10+b[2]-'0';
	if(x==y) cout<<"1";
	else cout<<"0";
	//1111
	int x1=(a[3]-'0')*10+a[4]-'0',y1=(b[3]-'0')*10+b[4]-'0';
	if(x1==y1) cout<<"1";
	else cout<<"0";
	//2222
//	if(a[5]=='A' || a[5]=='B' || a[5]=='C'){
//		if(b[5]=='A' || b[5]=='B' || b[5]=='C') cout<<"1";
//	}
//	else if(a[5]=='D' || a[5]=='F'){
//		if(b[5]=='D' || b[5]=='F') cout<<"1";
//	}
//	else cout<<"0";
	//3333
	if(a[5]=='A' && b[5]=='B'){
		cout<<"11";
	}
	else if(a[5]=='B' && b[5]=='A'){
		cout<<"11";
	}
	else if(a[5]=='C' && b[5]=='B'){
		cout<<"11";
	}
	else if(a[5]=='B' && b[5]=='C'){
		cout<<"11";
	}
	else if(a[5]=='D' && b[5]=='F'){
		cout<<"11";
	}
	else if(a[5]=='F' && b[5]=='D'){
		cout<<"11";
	}
	else if(a[5]=='C' && b[5]=='A'){
		cout<<"10";
	}
	else if(a[5]=='A' && b[5]=='C'){
		cout<<"10";
	}
	else cout<<"00";
	//4444
	return 0;
} 
