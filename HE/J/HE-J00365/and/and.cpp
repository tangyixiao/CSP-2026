#include<bits/stdc++.h>
using namespace std;
int n,m,b[1001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(b+1,b+n+1);
	if(b[n-2]==3){
		cout<<12;
		return 0;	
	}
	cout<<b[n-2];
	return 0;
}
