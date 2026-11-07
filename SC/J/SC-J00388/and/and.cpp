#include<bits/stdc++.h>
#include<cstdio>
#include<stdio.h>
using namespace std;
const int N=2e5+5;
int m,n,a[N],ans,maxai,cf[35];
void make_cf(){
	cf[1]=1;
	for(int i=2;i<=30;i++){
		cf[i]=cf[i-1]*2;
	}
}
bool comp_cf(){
	for(int i=1;i<=n;i++){
		bool flag=0;
		for(int j=1;j<=30;j++){
			if(a[i]==cf[j]-1){
				flag=1;
				break;
			}
		}
		if(flag==0){
			return 0;
		}
	}
	return 1;
}
void dfs(int step,int where,int cnt){
	if(cnt<=ans&&cnt!=-1)return;
	if(m-step>n-where+1)return;
	if(step==m){
		ans=max(ans,cnt);
		return;
	}
	if(cnt==-1){
		dfs(step+1,where+1,a[where]);
		dfs(step,where+1,-1);
	}
	else{
		dfs(step+1,where+1,cnt&a[where]);
		dfs(step,where+1,cnt);	
	}
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	make_cf();
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxai=max(a[i],maxai);
	}
	if(m==1){
		cout<<maxai;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(maxai<4){
		int num0=0,num1=0,num2=0,num3=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0)num0++;
			else if(a[i]==1)num1++;
			else if(a[i]==2)num2++;
			else if(a[i]==3)num3++;
		}
		if(num3>=m)ans=3;
		else if(num3+num2>=m)ans=2;
		else if(num3+num1>=m)ans=1;
		else ans=0;
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		ans=a[2];
		for(int j=3;j<=n;j++){
				ans=ans&a[j];
			}
		int maxx=a[1];
		for(int i=2;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(maxx<=ans)break;
				if(i!=j)maxx=maxx&a[j];
			}
			ans=max(maxx,ans);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}	
		}
		cout<<ans;
		return 0;
	}
	if(comp_cf()){
		sort(a+1,a+n+1,cmp);
		ans=a[m];
		cout<<ans;
		return 0; 
	}
	dfs(0,1,-1);
	cout<<ans;
	return 0;
}