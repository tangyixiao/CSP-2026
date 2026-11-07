#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,m;
long long a[N];
void input(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	return;
}
bool A,B;
void check(){
	A=true,B=true;
	for(int i=1;i<=n;i++) if((a[i]&(a[i]+1))!=0)
		A=false;
	for(int i=1;i<=n;i++) if(a[i]!=i-1)
		B=false;
	return;
}
void solve_n(){
	long long ans=a[1];
	for(int i=2;i<=n;i++)
		ans&=a[i];
	cout<<ans;
	return;
}
void solve_2(){
	long long ans=a[1]&a[2];
	for(int i=1;i<=n-1;i++)
		for(int j=i+1;j<=n;j++)
			ans=max(ans,a[i]&a[j]);
	cout<<ans;
	return;
}
void solve_n_1(){
	long long sans=a[1];
	for(int j=2;j<=n-1;j++)
		sans&=a[j];
	long long eans=1;
	for(int i=1;i<=n;i++){
		long long ans=sans;
		for(int j=1;j<=n;j++) if(j!=i)
			ans&=a[j];
		eans=max(eans,ans);
	}
	cout<<eans;
	return;
}
void solve_A(){
	sort(a+1,a+1+n);
	cout<<a[n-m+1];
	return;
}
void solve_B(){
	long long cnt=0;
	while(n>=1){
		if(m>=n/2) cnt+=n/2;
		else break;
		n/=2;
	}
	cout<<cnt;
	return;
}
void solve_4a(){
	int cnt[4]={0};
	for(int i=1;i<=n;i++)
		cnt[a[i]]++;
	if(m<=cnt[3]){cout<<3;return;}
	if(m<=cnt[3]+cnt[2]){cout<<2;return;}
	if(m<=cnt[3]+cnt[1]){cout<<1;return;}
	cout<<0;
	return;
}
void solve_1024a(){
	int cnt[1024]={0};
	for(int i=1;i<=n;i++)
		cnt[a[i]]++;
	if(m<=cnt[1023]) cout<<1023;
	return;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	input();
	check();
	if(m==1) cout<<(*max_element(a+1,a+1+n));//6,5;
	else if(m==n) solve_n();//7,5;
	else if(m==2) solve_2();//8_10,15;
	else if(A) solve_A();//13,5;
	else if((*max_element(a+1,a+1+n))<4) solve_4a();//16_17,10;
	else if((*max_element(a+1,a+1+n))<1024) solve_1024a();//18_19,10;!
	else if(B) solve_B();//14_15,10;!
	else if(m==n-1) solve_n_1();//11_12,10;!
	return 0;
}
