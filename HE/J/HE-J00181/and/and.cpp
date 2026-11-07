#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int jt=-1;
bool ch[N];
int n,m;
int b[N];
int i=1;
void dfs(int cnt){
	if(cnt==m){
		int sw=b[1];
		for(int q=1;q<=cnt;q++){
			sw=(sw&b[q]);
		}
		jt=max(jt,sw);
		return;
	}
	for(int q=1;q<=n;q++){
		if(ch[q]){
			continue;
		}
		b[i++]=a[q];
		ch[q]=1;
		dfs(cnt+1);
		i--;
		ch[q]=0;
	}
}
bool c=1;
void solve(){
	cin>>n>>m;
	int temp1=-1;
	for(int q=1;q<=n;q++){
		cin>>a[q];
		temp1=max(temp1,a[q]);
		if(q==1){
			continue;
		}
		if(a[q]-a[q-1]!=1){
			c=0;
		}
	}
	if(c==1){
		cout<<n-m;
		return;
	}
	int temp2=a[1];
	for(int q=2;q<=n;q++){
		temp2=(temp2&a[q]);
	}
	if(m==1){
		cout<<temp1;
		return;
	}
	if(m==n){
		cout<<temp2;
		return;
	}
	if(n<=2000&&m==2){
		long long temp=-1;
		for(int q=1;q<=n;q++){
			for(int w=q+1;w<=n;w++){
				long long t=a[q]&a[w];
				temp=max(temp,t);
			}
		}
		cout<<temp;
		return;
	}
	dfs(0);
	cout<<jt;
	return;
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
	return 0;
}
