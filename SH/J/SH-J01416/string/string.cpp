#include<bits/stdc++.h>
using namespace std;
struct t{
	long long a;
	char b;
}t[1000005];
long long cnt;
int mix;
int n;
void dfs(int l,int r){
	if(l==r||l>r){
		return ;
	}
	if(t[l].a==t[r].a&&t[l].b!=t[r].b){
		cnt+=t[l].a;
		dfs(l+1,r-1);	
	}	
	if(t[l].a==t[r].a&&t[r].b==t[l].b){
		dfs(l+1,r-1);	
	}
	if(t[l].a>t[r].a){
		t[l].a=t[l].a-t[r].a;
		if(t[r].b!=t[l].b){
			cnt+=t[r].a;
		}
		dfs(l,r-1);
	}
	else if(t[l].a<t[r].a&&t[r].b!=t[l].b){
		t[r].a=t[r].a-t[l].a;
		if(t[r].b!=t[l].b){
			cnt+=t[l].a;
		}
		dfs(l+1,r);
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i].a>>t[i].b;
	}
	dfs(1,n);
	cout<<cnt;
} 

