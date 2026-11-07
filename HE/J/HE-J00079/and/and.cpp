#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int f(int x){
	if(x==0){
		return 1;
	}
	int ans=2;
	while(x--){
		ans*=2;
	}
	ans/=2;
	return ans;
}
int ejz(int x){
	stack<int> s;
	while(x){
		s.push(x%2);
		x/=2;
	}
	int ans=0;
	while(!s.empty()){
		ans+=s.top()*f(s.size()-1);
		s.pop();
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<ejz(m);
	return 0;
}
