#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int i,a[90005];
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a,a+n+1);
		cout<<a[n];
	}else{
		sort(a,a+n+1);
		cout<<a[n+1-m];
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
