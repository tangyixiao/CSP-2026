#include<bits/stdc++.h>
using namespace std;
long long a[200010],cnt;
int n;
char b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long l=1,r=n,t=a[l],k=a[r];
	while(l<r){
		if(b[l]!=b[r]){
			cnt+=min(t,k);
		}
		int t1=1;
		t-=k;
		k-=t1;
		if(t<=0){
			t=a[++l];
		}
		if(k<=0){
			k=a[--r];
		}
	}
	cout<<cnt;
	return 0;
}
