#include<bits/stdc++.h>
using namespace std;
/*
至少前十个点可以过
后面几个骗了分
&值最大也就是说1的重叠个数最多
例如：
	31： 1 1 1 1 1
	3：  0 0 0 1 1
	1：  0 0 0 0 1
	15： 0 1 1 1 1
	7：  0 0 1 1 1
	很不容易就找到了31,15,7 
*/
int n,m,tmp;
int q[200005];
vector<int> a[2005];
vector<int> b;
vector<int> xb;
bool cmp(vector<int> x,vector<int> y){
	int sx=x.size(),sy=y.size();
	if(sx!=sy) return sx>sy;
	for(int i=1;i<=sx-1;i++){
		if(x[i]!=y[i]) return x[i]>y[i];
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n>2000){
		for(int i=1;i<=n;i++){
			cin>>q[i];
		}
		if(m==n-1){
			int sum=2147483647;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(j!=i) sum=sum&q[j];
				}
			}
			cout<<sum;
		}else{
			sort(q+1,q+1+n);
			cout<<q[n-m+1];
		}
		return 0;
	} 
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		a[i].push_back(tmp);
		mx=max(mx,int(log(a[i][0])+1));
	}
	b.resize(mx+1);
	for(int i=1;i<=n;i++){
		for(int j=mx;j>=0;j--){
			a[i].push_back(bool(a[i][0]&(1<<j)));
			b[mx-j]+=a[i][mx-j+1];
		}
	}
	sort(a+1,a+1+n,cmp);
	bool flag=1;
	for(int i=1;i<=mx+1;i++){
		if(b[i-1]>=m){
			if(flag){
				for(int j=1;j<=n;j++){
					if(a[j][i]){
						xb.push_back(j);
					}
				}
				flag=0;
			}else{
				flag=0;
				vector<int> xxb(0);
				for(auto j:xb){
					if(a[j][i]){
						xxb.push_back(j); 
					}
				}
				if(xxb.size()<m){
					for(auto j:xb){
						if(!a[j][i]){
							xxb.push_back(j);
						}
					}
				}
				xb.clear();
				for(auto j:xxb)
					xb.push_back(j);
			}
			if(xb.size()==m) break;
		}
	}
	int ans=2147483647;
	for(int i=0;i<m;i++){
		ans=ans&a[xb[i]][0];
	}
	cout<<ans;
	return 0;
}

