#include<bits/stdc++.h>
using namespace std;
bool cmp(long long int c,long long int d){
	return c>d; 
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	long long int a[n+10];
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}else{
		cout<<a[n/2];
	}
	return 0;
}