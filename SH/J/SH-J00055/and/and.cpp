#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	cin.tie(0),cout.tie(0);
	long long n,m,a[200015];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(n==m){
		long long sum=a[1];
		for(int i=1;i<=n;i++){
			sum&=a[i];
		}cout<<sum;
	}else if(m==2){
		long long ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j)ans=max(ans,a[i]&a[j]);
			}
		}cout<<ans;
	}
	else{
		sort(a+1,a+n+1,cmp);
		long long sum=a[1];
		for(int i=1;i<=m;i++){
			sum&=a[i];
		}cout<<sum;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
