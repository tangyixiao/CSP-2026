#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1){
		cout<<0;
	}else{
		cout<<a[n-2];	
	}

	
	
	fclose(stdin);//abbasd
	fclose(stdout);
	return 0;
}
