#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
const int N2=1e9+10;
int n,a[N],s_l[N],s_r[N];
char b[N],t1[N2];
bool task1(){//1~12,17~21
	for(int i=1;i<=n;i++)if(a[i]>500)return false;
	int len=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			t1[++len]=b[i];
		}
	}
	int ans=0;
	int  lon=len/2;
	for(int i=1;i<=lon;i++)if(t1[i]!=t1[len-i+1])ans++;
	cout<<ans;
	return true;
}
void task2(){//rand
	int l=1,r=n,ans=0;
	int l_n=0,r_n=s_l[n];
	int move;
	while(l<=r){
		if(a[l]<a[r]){
			move=s_r[r]-r_n;
			if(b[l]!=b[r]){
				ans+=move;
			}
			l_n+=move;
			l++;
			r_n-=move;
			if(r_n+s_r[r]>=n)r--;
		}else{
			move=s_l[l]-l_n;
			if(b[l]!=b[r]){
				ans+=move;
			}
			r_n-=move;
			r--;
			l_n+=move;
			if(l_n>=s_l[l])l++;
		}
	}
	cout<<ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s_l[i]=s_l[i-1]+a[i];
	}
	for(int i=n;i>=1;i--)s_r[i]=s_r[i+1]+a[i];
	if(task1())return 0;
	task2();
	return 0;
}
