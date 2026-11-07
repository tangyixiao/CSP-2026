#include<bits/stdc++.h>
using namespace std;

int n,m,ans=0,a[200010],p,s1[200010],s2[200010];
bool v[200010],ok=1;

void dfs(int x,int num){
	if(x>m){
		if(num>ans){
			ans=num;
		}
		return;
	}
	if(x>n){
		return;
	}
	for(int i=1;i<=n;i++)
		if(!v[i]){
			v[i]=1;
			if(num==-1){
				dfs(x+1,a[i]);
			}
			else{
				dfs(x+1,num&a[i]);
			}
			v[i]=0;
		}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(m==n){
			if(ok){
				ans=a[i];
				ok=0;
			}
			else{
				ans=(ans&a[i]);
			}
		}
	}
	if(m==n){
		printf("%d",ans);
		return 0;
	}
	ans=0;
	if(m==n-1){
		s1[1]=a[1];
		for(int i=2;i<=n;i++){
			s1[i]=(s1[i-1]&a[i]);
		}
		s2[n]=a[n];
		for(int i=n-1;i>=1;i--){
			s1[i]=(s1[i+1]&a[i]);
		}
		for(int i=1;i<=n;i++){
			if(i==1){
				if(s2[i+1]>ans)
					ans=s2[i+1];
			}
			if(i==n){
				if(s1[i-1]>ans)
					ans=s1[i-1];
			}
			if(i>1&&i<n){
				if((s1[i-1]&s2[i+1])>ans)
					ans=(s1[i-1]&s2[i+1]);
			}
		}
		printf("%d",ans);
		return 0;
	}
	ans=0;
	memset(v,0,sizeof(v));
	dfs(1,-1);
	printf("%d",ans);
	return 0;
}