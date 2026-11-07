#include<bits/stdc++.h>
using namespace std;
const int N=2e5+9;
int n,m,ans;
int a[N]; 
int bit[35],cnt[N];
bool bi[N][35];
void inttobi(int x,int i){
	int pos=30;
	while(x){
		if(x>=bit[pos]){
			x-=bit[pos];
			bi[i][pos]=1;
		}
		pos--;
	}
	return;
}
void solve(){
	cin>>n>>m;
	bit[0]=1;
	for(int i=1;i<=30;i++){
		bit[i]=bit[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		inttobi(a[i],i);
	}
/*	for(int i=1;i<=n;i++){
		for(int j=0;j<30;j++){
			cout<<bi[i][j]<<" ";
		}
		cout<<endl;
	}*/
	for(int i=0;i<=30;i++){
		for(int j=1;j<=n;j++){
			if(bi[j][i]==1){
				cnt[i]++;
			}
		} 
	}
	/*for(int i=0;i<=30;i++){
		cout<<cnt[i]<<" ";
	}
	cout<<endl;*/
	int pos;
	for(int i=30;i>=0;i--){
		if(cnt[i]>=m){
			pos=i;
			break;
		}
	}
	//cout<<bit[pos]<<endl;
	for(int i=1;i<=n;i++){
		a[i]=(a[i]%bit[pos+1]);
	}
	sort(a+1,a+n+1);
	ans=a[n];
	/*for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;*/
	for(int i=n-1;i>=n-m+1;i--){
		ans=(ans&a[i]);
	}
	cout<<ans<<endl;
	return;	
}
void solve_BF(){
	if(n<=20){
		solve();
		return;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<*max_element(a+1,a+n+1)<<endl;
		return;
	}
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans<<endl;
	}
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=(ans&a[i]);
		}
		cout<<ans<<endl;
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	if(n<=2000){
		solve_BF();
	}
	else{
		solve();		
	}
	return 0;
} 
