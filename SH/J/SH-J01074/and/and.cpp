#include <bits/stdc++.h>
using namespace std;
int n,m;

struct num{
	long long v;
	int cnt;
	int maxn;
}a[200005];

bool cmp1(num a,num b){
	if(a.maxn != b.maxn){
		return a.maxn > b.maxn;
	}
	return a.cnt > b.cnt;
}

bool cmp2(num a,num b){
	return a.cnt > b.cnt;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	for( int i = 1; i <= n; i++ ){
		cin>>a[i].v;
		int x=a[i].v;
		bool found=0;
		
		for( int j = 30; j >= 0; j-- ){
			if(x >= pow(2,j)){
				a[i].cnt++;
				x-=pow(2,j);
				if(found == 0){
					a[i].maxn=pow(2,j);
				}
			}
		}
	}
	
	sort(a+1,a+n+1,cmp1);
	int cur=0;
	int now=a[1].maxn;
	vector<int>final;
	for( int i = 1; i <= n; i++ ){
		if(i == n-m){
			sort(a+1,a+n+1,cmp2);
			for( int j = 1; j <= m; j++ ){
				final.push_back(a[j].v);
			}
		}
		if(a[i].maxn == now){
			cur++;
		}
		if(a[i].maxn != now){
			if(cur >= m){
				for( int j = 1; j <= m; j++ ){
					final.push_back(a[j].v);
				}
				break;
			}else{
				cur=0;
				now=a[i].maxn;
			}
		}
	}
	
	int ans=final[0];
	for( int i = 1; i < m; i++ ){
		ans=ans&final[i];
	}
	cout<<ans<<endl;
	return 0;
}
