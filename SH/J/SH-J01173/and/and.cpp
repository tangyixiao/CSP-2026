#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool cmp(int l,int r){
	return l>r;
}
int dfs(int now,int num,int cnt){
	if(now>n&&cnt!=m){
		return 0;
	}if(cnt>m)return 0;
	if(cnt==m)return num;
	if(m-cnt>n-now+1)return 0;
	if(cnt==0){
		return max(dfs(now+1,a[now],1),dfs(now+1,0,0));
	}return max(dfs(now+1,num&a[now],cnt+1),dfs(now+1,num,cnt));
}signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n){
		cin>>a[1];
		for(int i=2;i<=n;i++){
			cin>>a[i];
			a[1]&=a[i];
		}cout<<a[1];
		return 0;
	}for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a+1,a+n+1,cmp);
	if(n>2000&&a[1]<=4){
		int tmp1,tmp2,tmp3,tmp4;
		for(int i=1;i<=n;i++){
			if(a[i]==1)tmp1++;
			else if(a[i]==2)tmp2++;
			else if(a[i]==3)tmp3++;
			else tmp4++;
		}if(tmp4>=m)cout<<4;
		else if(tmp3>=m)cout<<3;
		else if(tmp2+tmp3>=m)cout<<2;
		else cout<<1;
		return 0;
	}
	if(n>2000)cout<<a[m];
	if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}cout<<mx;
		return 0;
	}
	if(m==1){
		cout<<a[1];
		return 0;
	}cout<<dfs(1,0,0);
	return 0;
} 
