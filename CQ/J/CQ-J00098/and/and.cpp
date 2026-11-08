#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int a[N],m,n;
int b[N],vis[N],tot,ans;

void f(){
	
	if (tot==m){
		
		int cnt=b[1];
		
		for (int i=2;i<=tot;i++){
			
			cnt=cnt&b[i];
			
		}
		
		ans=max(ans,cnt); 
		
		return ;
		
	}
	
	for (int i=1;i<=n;i++){
		
		
		if (vis[i]) continue ;
		b[++tot]=a[i]; vis[i]=1;
		f(); tot--; vis[i]=0;
		
	}
	
}

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	int maxn=0;
	
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++) maxn=max(maxn,a[i]);
	
	sort(a+1,a+1+n);
	
	if (m==1){
		
		cout<<a[n];
		return 0;
		
	}
	
	if (m==2){
		
		int maxm=0;
		
		for (int i=1;i<=n;i++){
			
			for (int j=i+1;j<=n;j++){
				
				maxm=max(maxm,a[i]&a[j]);
				
			}
			
		}
		
		cout<<maxm;
		return 0;
		
	}
	
	if (n<=20){
		
		f(); cout<<ans;
		return 0;
		
	}
	
	if (maxn<=5005){
		
		for (int i=maxn;i>=1;i--){
		
			int x=0;
		
			for (int j=1;j<=n;j++){
			
			
				if ((a[j]&i)>=i) x++;
			
			}
		
			if (x>=m) { cout<<i; break ;}
		
		}
		
		return 0;
		
	}
	
	if (m==n){
		
		int cnt=a[1];
		
		for (int i=2;i<=n;i++) cnt=cnt&a[i];
		
		cout<<cnt;
		
		return 0;
		
	}
	
	return 0;
	
} 
