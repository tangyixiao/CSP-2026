//60分 
#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,a[200010],cnt[35],num,b;
bool cmp(long long x,long long y){
	return x>=y;
}
long long pom(long long n){
	long long ans=1;
	if(n%4==1){
		ans=2;
	}
	if(n%4==2){
		ans=4;
	}
	if(n%4==3){
		ans=8;
	}
	for(long long i=1;i<=n/4;i++){
		ans*=16;
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(long long i=1;i<=n;i++){
		for(long long j=30;j>=1;j--){
			if(a[i]==pom(j)-1){
				cnt[j]=a[i];
				num++;
				break;
			}
		}
	}
	if(num>m){
		for(long long i=30;i>=1;i--){
			if(cnt[i]!=0){
				b++;
			}
			if(b==m){
				cout<<cnt[i];
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
	}
	else{
		for(long long i=30;i>=1;i--){
			if(cnt[i]!=0){
				ans=cnt[i];
				break;
			}
		}
	}
	long long z=0,r=m;
	for(long long i=1;i<=m;i++){
		long long s=0;
		for(long long j=30;j>=1;j--){
			if(a[i]==pom(j)){
				z++;
			}
			if(a[i]==cnt[j]){
				s=1;
				break;
			}
		}
		if(s==0){
			ans=ans&a[i];
		}
	}
	while(z!=0){
		z--;
		for(long long j=30;j>=1;j--){
			if(a[r]==pom(j)){
				z++;
				break;
			}
		}
		ans=ans&a[r++];
	} 
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 