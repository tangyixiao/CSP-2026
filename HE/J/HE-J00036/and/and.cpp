#include<bits/stdc++.h>
using namespace std;
long long a[102400];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,sum=0,mx=-1,mx2=-1;
	cin>>n>>m;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(mx2<a[i]&&a[i]!=mx){
			mx2=a[i];
		}
	}
	if(m==2){
		mx&=mx2;
		cout<<mx;
		return 0;
	}
	sort(a+1,a+n+1);
	sum=a[n];
	for(int i=1;i<=m;i++){
		sum&=a[n-i];
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
