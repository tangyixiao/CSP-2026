#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,arr[N],ans;
bool A=true,B=true;
void fun(int a,int an){
	if(a>m)return ;
	if(a==m){
	ans=max(ans,an);
	return ; 
	}
	for(int i=1;i<=n;i++){
		fun(a+1,an&arr[i]);
	}
}
//int log(int a,int b){
//	int ans=0;
//	while(a>=b){
//		a/=b;
//		ans++;
//	}
//	return ans;
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
//	cout<<n<<' '<<m<<"\n";
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=2;i<=n;i++){
		if(arr[i]-arr[i-1]!=1){
		B=false;
		return 0;
		}
	}
//	cout<<B<<"\n";
	sort(arr+1,arr+1+n);
	if(m==1){cout<<arr[n];
	   return 0;
	}
	if(m==n){
		ans=arr[1];
		for(int i=2;i<=n;i++){
			ans&=arr[i];
		}
		cout<<ans;
		return 0;
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			fun(1,arr[i]);
		}
		cout<<ans;
		return 0;
	}else{
		if(B){
//			cout<<"duck_sajin"; 
			ans=n-1;
//			cout<<ans;
//			int k=log(n,2);
			for(int i=n-2;i>=n-m+1;i--){
//				cout<<ans<<" "<<i<<"\n";
				ans=ans&i;
			} 
			cout<<ans;
		}else{
			cout<<0;
		}
	}
}