#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],maxn;
long long c(long long num){
	long long cnt=0;
	while(num){
		if(num%2==1)cnt++;
		num/=2;
	}
	return cnt;
}
bool cmp(long long s,long long z){
	if(c(s)!=c(z)){
		return c(s)<c(z);
	}else{
		return s<z;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i!=n+1;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	long long t=m-1;
	maxn=a[n];
	for(int i=n-1;i!=0;i--){
		if(t--<=0)break;
		maxn&=a[i];
	}
	sort(a+1,a+n+1,cmp);
	t=a[n];m--;
	for(int i=n-1;i!=0;i--){
		if(m--<=0)break;
		t&=a[i];
	}
	cout<<max(maxn,t);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

