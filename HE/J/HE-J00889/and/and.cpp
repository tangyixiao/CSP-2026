#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],s1,s2,s3,s4,ans,vis[200010];
void bl(int u,int kkk){
	if(u==0){
		ans=max(ans,kkk);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]){
			continue;
		}
		vis[i]=1;
		bl(u-1,kkk&a[i]);
		vis[i]=0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1)s1++;
		if(a[i]==2)s2++;
		if(a[i]==3)s3++;
		if(a[i]==4)s4++;
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		} 
		cout<<ans;
		return 0;
	}
	else if(s1+s2+s3+s4==n){
//		cerr<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" ";
		if(s4>=m)cout<<"4";
		else if(s3>=m)cout<<"3";
		else if(s3+s2>=m||s2>=m)cout<<"2";
		else if(s1>=m||s3+s1>=m)cout<<"1";
		else cout<<"0";
	}
	else if(n<=30){
		bl(m,2147483647);
		cout<<ans;
		return 0;
	}
	else{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	return 0;
}
/*
7 3
1 3 7 15 31 63 127 
*/
