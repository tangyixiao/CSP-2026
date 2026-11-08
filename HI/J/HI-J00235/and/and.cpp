#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n=0,m=0,Max=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int n=0;
		cin>>n;
		if(n>Max){
			Max=n;
		}
	}
	if(m==1){
		cout<<Max;
	}else{
		cout<<"0";
	}
	return 0;
}
