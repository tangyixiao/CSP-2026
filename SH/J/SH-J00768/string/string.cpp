#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],num,ans;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n,cntl=a[1],cntr=a[n];
	while(l<r){
		num=min(cntl,cntr);
		if(c[l]!=c[r]){
			ans+=num;
		}
		cntl-=num;
		if(cntl==0){
			l++;
			cntl=a[l];
		}
		cntr-=num;
		if(cntr==0){
			r--;
			cntr=a[r];
		}
	}
	cout<<ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
