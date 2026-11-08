#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(i==n-1){
			cout<<a;
		}
	}
	return 0;
}
