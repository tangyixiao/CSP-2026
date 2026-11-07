#include<bits/stdc++.h>
using namespace std;
int n,m,b_cnt=0;
int a[200005],b[200005];
vector<int>v;
bool chcklg(int x){
	while(x%2==0){
		if(x==2)return true;
		x/=2;
	}
	return false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(chcklg(a[i]+1)){
			v.push_back(a[i]);
		}else b[++b_cnt]=a[i];
	}
	sort(a+1,a+n+1);
	sort(v.begin(),v.end());
	sort(b+1,b+b_cnt+1);
	int ans=b[b_cnt];
	if(ans==0) ans=v[v.size()-3];
	int cnt=0;
	for(int i=v.size()-1;i>=0;i--){
		if(cnt+1==m)break;
		cnt++;
		ans&=v[i];
	}cout<<ans;
}
