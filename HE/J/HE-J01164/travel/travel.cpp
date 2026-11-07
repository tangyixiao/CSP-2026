#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	string r,x;
	cin>>r>>x;
	if(r<x||x<r){
		cout<<1111;
	}
	else if(r==x){
		cout<<1110;
	}
	return 0;
} 
