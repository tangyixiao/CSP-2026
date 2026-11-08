#include<bits/stdc++.h>
using namespace std;
int n=0;
string a; 
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++){
		cin >> a[i];
	}
	if(a[1]*10+a[2]==a[6]*10+a[7]){
		cout << 1;
		n=1;
	}
	else{
		cout << 0;
		n=0;
	};
	if((a[3]*10+a[4]==a[8]*10+a[9])&&(a[1]*10+a[2]==a[6]*10+a[7])){
		cout << 1;
		n = n*1;
	}
	else{
		cout << 0;
		n=n*0;
	};
	if((a[5]=='A'||a[5]=='B'||a[5]=='C')&&(a[10]!='D'&&a[10]!='F')&&(a[1]*10+a[2]==a[6]*10+a[7])){
		cout << 1;
		n=n*1;
	}
	else{
		cout << 0;
		n=n*0;
	};
	if((a[5]=='A'&&a[10]=='B'&&n==1)||(a[5]=='B'&&a[10]=='C'&&n==1)||(a[5]=='C'&&a[10]=='B'&&n==1)||(a[5]=='B'&&a[10]=='A'&&n==1)||(a[5]=='D'&&a[10]=='F'&&n==1)||(a[5]=='F'&&a[10]=='D'&&n==1)&&(a[3]*10+a[4]==a[8]*10+a[9])&&(a[1]*10+a[2]==a[6]*10+a[7]))
		cout << 1;
	else
		cout << 0;
	
	return 0;
} 
