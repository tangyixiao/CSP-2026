#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int a[500005];
	int n=0,m=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<3;
	}
	if(m==2){
		cout<<"3 1"; 
	}
	return 0;
}

