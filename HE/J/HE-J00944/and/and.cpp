#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b){
	return b<a;
}
long long a[100010];
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n,cmp);
	long long sum=a[1];
	for(long long i=1;i<=m-1;i++){
		sum=min(sum,a[i+1]);
	}
	cout<<sum;
fclose(stdin);
fclose(stdout);
	return 0;
}
