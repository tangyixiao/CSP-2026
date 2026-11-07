#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long b,a[200005],all=0;
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	if(m==n){
		all=a[1];
		for(int i=2;i<=n;i++){
			all=all&a[i];
		}
		cout<<all;
		return 0;
	}
	if(m==1){
		cout<<a[n];
		return 0; 
	}
	all=a[n];
	a[n]=0;
	for(int j=1;j<m;j++){
		long long p,big=0;
		for(int i=1;i<=n;i++){
			if(a[i]&all>=big){
				big=all&a[i];
				p=i;
			}
		}
		all=big;
		a[p]=0;
	}
	cout<<all;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
