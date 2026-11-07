#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int n,m;
int a[N];
int ans1_5=0;
void dfs1_5(int i,int cnt,int ni){
	if(ni==m){
		ans1_5=max(ans1_5,cnt);
		return;
	}
	if(i==n+1)return;
	dfs1_5(i+1,cnt&a[i],ni+1);
	dfs1_5(i+1,cnt,ni);
}
void solve1_5(){
	dfs1_5(1,2147483647,0);
	cout<<ans1_5;
}
int ans6=0;
void solve6(){
	for(int i=1;i<=n;i++)ans6=max(ans6,a[i]);
	cout<<ans6;
}
int ans7=2147483647;
void solve7(){
	for(int i=1;i<=n;i++)ans7=ans7&a[i];
	cout<<ans7;
}
int ans8_10=0;
void solve8_10(){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans8_10=max(ans8_10,a[i]&a[j]);
		}
	}
	cout<<ans8_10;
}
int ans11_12=0;
void solve11_12(){
	int pref11_12[N],suff11_12[N];
	pref11_12[1]=a[1];
	pref11_12[0]=pref11_12[n+1]=suff11_12[0]=suff11_12[n+1]=2147483647;
	for(int i=2;i<=n;i++)pref11_12[i]=pref11_12[i-1]&a[i];
	suff11_12[n]=a[n];
	for(int i=n-1;i>0;i--)suff11_12[i]=suff11_12[i+1]&a[i];
	for(int i=1;i<=n;i++){
		ans11_12=max(ans11_12,pref11_12[i-1]&suff11_12[i+1]);
	}
	cout<<ans11_12;
}
bool cmp13(int x,int y){
	return x>y;
}
void solve13(){
	sort(a+1,a+1+n,cmp13);
	cout<<a[m];
}
int ans14_15=2147483647;
void solve14_15(){
	if(m>n/2)cout<0;
	else{
		for(int i=n;i>=n-m+1;i--){
			ans14_15=ans14_15&a[i];
		}
		cout<<ans14_15;
	}
}
int b16_17[5];
void solve16_17(){
	for(int i=1;i<=n;i++){
		b16_17[a[i]]++;
	}
	m-=b16_17[3];
	if(b16_17[2]>=m)cout<<2;
	else if(b16_17[1]>=m)cout<<1;
	else cout<<0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool is13,is14_15,is16_17;
	is13=is14_15=is16_17=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(floor(log2(a[i]+1))!=ceil(log2(a[i]+1)))is13=0;
		if(floor(log2(n))!=ceil(log2(n)))is14_15=0;
		if(a[i]!=i-1)is14_15=0;
		if(a[i]>=4)is16_17=0;
	}
	if(n<=20)solve1_5();
	else if(m==1)solve6();
	else if(m==n)solve7();
	else if(m==2&&n<=2000)solve8_10();
	else if(m==n-1)solve11_12();
	else if(is13)solve13();
	else if(is14_15)solve14_15();
	else if(is16_17)solve16_17();
	return 0;
} 
