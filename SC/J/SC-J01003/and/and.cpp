#include <bits/stdc++.h>
using namespace std;
set <long long> s;
map <long long,int> q;
long long x,sum;
int n,m,l,cnt;
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	std::ios::sync_with_stdio(false);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		q[x]++;
		s.insert(x);
	}
	if(m==n){
		for(auto i:s){
			if(sum==0){
				sum=i;
				continue;
			}
			sum=(sum&i);
		}
		cout<<sum;
	} else {
		vector <long long> a;
		for(auto i:s){
//			cout<<i<<" ";
			a.push_back(i);
			l++;
		}
//		cout<<endl;
		for(int i=l;i>0;i--){
			if(cnt==m) break;
			int x=log(a[i]);
			if(pow(2,x)==a[i]) continue;
			if(sum==0){
				sum=a[i];
//				cout<<sum<<" "<<q[a[i]]; 
				cnt+=q[a[i]];
				continue;
			}
			sum=(sum&a[i]);
//			cout<<sum<<" "<<q[a[i]]<<endl;
			cnt+=q[a[i]];
		}
		cout<<sum;
	}
	return 0;
}
