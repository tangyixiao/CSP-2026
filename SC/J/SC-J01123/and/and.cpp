#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ma=-1,ans=-1,k,h,sum;
bool er(int b){
	while(b!=1){
		if(b%2==1)return 0;
		b/=2;
	}
	return 1;
}
void solveA(){
	sort(a+1,a+n+1,greater<int>());
	cout<<a[m];
}
void solveB(){
	sort(a+1,a+n+1,greater<int>());
	if(m<=n/2){
		cout<<a[m];
	}else{
		cout<<0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
		if(er(a[i]+1)){
			k++;
		}
		if(a[i]==i-1){
			h++;
		}
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	if(m==n){
		ans=ma;
		for(int i=1;i<=n;i++){
			ans&=a[i];
			
		}
		cout<<ans;
		return 0;
	}
	if(k==n){
		solveA();
		return 0;
	}
	if(h==n&&er(n)){
		solveB();
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&=a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			sum=ma;
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				sum&=a[j];
			}
			ans=max(ans,sum);
		}
		cout<<ans;
		return 0;
	}
	
	for(int i=1;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			for(int k=j+1;k<=n;k++){
				ans=max(ans,(a[i]&=a[j])&=a[k]);
			}
		}
	}
	cout<<ans;
	
	
	return 0;
}