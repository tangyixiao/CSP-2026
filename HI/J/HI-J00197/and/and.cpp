#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAX=2147483647;
int a[200005];
int n,m,ans;
struct node{
	int a,b;
}b[200005];
void dfs(int x,string s,int sum){
	if(x==m){
		ans=max(ans,sum);
		return;
	}
	if(sum<ans){
		return;
	}
	for(int i=0;i<n;i++){
		string c=to_string(i);
		if(s.find(c)==-1){
			dfs(x+1,s+c,sum&a[i]);
		}
	}
}
bool cmp(int x,int y){
	return x>y;
} 
bool cmp2(node x,node y){
	if(x.b!=y.b){
		return x.b>y.b;
	}
	return x.a<y.a; 
} 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool flaga=1;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(log2(a[i]+1)!=signed(log2(a[i]+1))){
			flaga=0;
		}
	}
	if(m==1){
		ans=-1;
		for(int i=0;i<n;i++){
			ans=max(ans,a[i]);
		}
	}
	else if(m==n){
		ans=MAX;
		for(int i=0;i<n;i++){
			ans&=a[i];
		}
	}
	else if(m==2&&n<=2000){
		ans=-1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				ans=max(a[i]&a[j],ans);
			}
		}
	}
	else if(flaga){
		ans=MAX;
		sort(a,a+n,cmp);
		for(int i=0;i<m;i++){
			ans&=a[i];
		}
	}
	else if(n<=5){
		string s="";
		dfs(0,s,MAX);
	}
	else{
		ans=MAX;
		for(int i=0;i<n;i++){
			b[i].a=a[i];		
			bitset<32> c(a[i]);
			string d=c.to_string();
			for(char ch:d){
				if(ch=='1'){
					b[i].b++;
				}
			}
		}
		sort(b,b+n,cmp2);
		for(int i=0;i<m;i++){
			ans&=b[i].a;
		}	
	} 
	cout<<ans;
	return 0;
}
