#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N],p[35],m,n;
vector<int> q[35];
set<int> s,s1;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t=a[i];
		int cnt=0;
		while(t){
			if(t%2==1){
				p[cnt]++;
				q[cnt].push_back(i);
				
			}
			cnt++;
			t>>=1;
		}
	}
	int flag=1;
	for(int i=30;i>=0;i--){
		if(p[i]>=m&&flag){
			flag=0;
			for(auto j:q[i]){
				s.insert(j);
			}
		}else if(p[i]<m){
			continue;
		}else{
			int cnt=0;
			for(auto j:s){
				if(a[j]>>i==1){
					cnt++;
				}
			}
			if(cnt>=m){
				for(auto j:s){
					if(a[j]>>i==0){
						s.erase(j);
					}
				}
			}
		}
	}
	int ans=2147483647,cnt=0;
	for(auto j:s){
		s1.insert(a[j]);
	}
	for(auto j:s1){
		cnt++;
		if(cnt>s1.size()-m){
			ans&=j;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
