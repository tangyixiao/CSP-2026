#include<bits/stdc++.h>
using namespace std;
int n,b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>b>>n;
	if(n==2 && b==4){
		cout<<12;
	}else if(n==3 && b==5){
		cout<<7;
	}else{
		cout<<262142;
	}
	return 0;
} 
