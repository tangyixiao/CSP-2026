#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool cmp(long long x,long long y){
	return x>y;
}
bool check(int x){
	int q=1;
	while(1){
		if(q>x){
			break;
		}
		q*=2;
	}
	int num=0;
	for(int i=1;i<=n;i++){
		if(a[i]<q&&a[i]>=q/2){
			num++;
		}
		if(num>=2) return 1;
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	long long ans=0;
	int y=2;
	for(int i=1;i<=n;i++){
		if(check(a[i])){
			ans=a[i];
			y=i+1;
			break;
		}
	}
	if(ans==0){
		ans=a[1];
	}
	for(int i=y;i<=m+y-2;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

