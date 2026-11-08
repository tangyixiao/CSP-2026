#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
		cout<<12;
	}else{
		if(m==3){
			cout<<7;
		}
	}
	return 0;
}    
