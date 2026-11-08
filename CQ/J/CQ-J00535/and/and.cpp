#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
vector<int> vec1,vec2;
bool cmp(int x,int y){
	return x>y; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) vec1.push_back(a[i]);
	for(int i=30;i>=0;i--){
		for(int j:vec1) if((j>>i)&1) vec2.push_back(j);
		if((int)vec2.size()<m) vec2.clear();
		else vec1=vec2,vec2.clear(),ans+=(1<<i);
	}cout<<ans;
	return 0;
}
/*
ÒÀ¾É°´Î»¿¼ÂÇ£¬ÒÀ¾É´Ó¸ßµ½µÍ£¬ÒÀ¾Évector 
*/
