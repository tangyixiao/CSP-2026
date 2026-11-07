#include <bits/stdc++.h>
using namespace std;
int n,a[300000];
long long ans=0,sum[300000]={0}; 
char c[300000];
char searchPos(long long idx){//这里考虑用前缀和+二分 
	long long l=0,r=n,sle,m;
	//cout <<(l+1)<=r;
	while((l+1)<r){
		//cout <<l<<r<<m;
		m=(l+r)/2;
		
		if(idx>sum[m]){
			l=m;
		}else{
			r=m;
		}
	}
	sle=r;
	return c[sle];
	
} 
int main(){//从字符两边向中点修改，如果前后不匹配就ans++,ll能行
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		sum[i]=sum[i-1]+a[i];
		cin >> c[i];
		//cout <<a[i]<<c[i]<<sum[i]<<' ';
	}
	//cout <<searchPos(5);searchPos验证无误
	//主循环
	for(long long i=1;i<=sum[n]/2;i++){
		if(searchPos(i)!=searchPos(sum[n]+1-i)){
			ans++;
		}
	} 
	cout <<ans;
	return 0;
}
