#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a[3],flag=0;
	string R,X;
	cin>>a[1]>>R>>a[2]>>X;
	if(a[1]!=a[2]){
		cout<<0<<0<<0<<0;
		return 0;
	}
	cout<<1;
	if(R[0]-'0'!=X[0]-'0'||R[1]-'0'!=X[1]-'0'){
		cout<<0<<0<<0;
		return 0;
	}
	cout<<1;
	if(R[2]=='A'||R[2]=='B'||R[2]=='C'){
		if(X[2]=='D'||X[2]=='F'){
			cout<<0<<0;
			return 0;
		}
		cout<<1;
	}
	else if(X[2]=='A'||X[2]=='B'||X[2]=='C'){
		if(R[2]=='D'||R[2]=='F'){
			cout<<0<<0;
			return 0;
		}
		cout<<1;
	}
	if(abs(R[2]-X[2])!=1){
		cout<<0;
		return 0;
	}
	cout<<1;
	
	
	
	return 0;
}
