#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n,mi=1000000,ma=0,a[100000];
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+m);
	if(n==1){
		cout<<a[m-1];
	}else{
		cout<<a[m/2];
	}
	fclose(stdin);
	fclose(stdout);
}
