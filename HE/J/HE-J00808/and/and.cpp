#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],sum=0;
vector<int>b;
vector<int>c;
vector<int>r;
int n,m;
void f(int q,int p){
	if(q/2==0||p/2==0){
		b.push_back(p%2);
		c.push_back(q%2);
		int t=min(b.size(),c.size());
		for(int i=t;i>=1;i--){
			if(b[i]==1&&c[i]==1)r.push_back(1);
			else{
				r.push_back(0);
			}
			sum++;
		}
		return;
	} 
	else{
		b.push_back(p%2);
		c.push_back(q%2);
		f(p/2,q/2);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n);
	for(int i=n;i>n-m;i--){
		f(a[i],a[i+1]);
	}
	int ans=0;
	int v=1;
	for(int i=0;i<sum;i++){
       if(r[i]==0&&i!=1)v*=2;
       else{
       	ans+=v*2;
	   }
	}
	cout<<ans;
	return 0;
}
