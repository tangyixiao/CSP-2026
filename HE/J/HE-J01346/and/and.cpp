#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}if(n>3){
		for(int i=0;i<n;i++){
			s=max(a[i]&a[i+1],a[i]&a[i+2]);
		}
	}else{
		cout<<1;
	}

}
