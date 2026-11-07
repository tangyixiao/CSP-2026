#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],n2[40];
int f[200005][40],sum[200005][40];
void bcj(long long x1){
	long long x=a[x1];
	for(int i=0;i<=30;i++){
		if(x==0){
			break;
		}
		if(x%2){
			f[x1][i]=1;
		}
		x/=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long n1=1;
	for(int i=0;i<=30;i++){
		n2[i]=n1;
		n1*=2;
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
 		bcj(i);
	}
	long long ans=0,p=30;
	vector<int> l;
	for(int i=1;i<=n;i++){
		l.push_back(i);
	}
	while(p>=0){
		int cnt=0;
		for(int i=0;i<l.size();i++){
			if(f[l[i]][p]){
				cnt++;
			}
		}
		if(cnt<m){
			p--;
			continue;
		}
		ans+=n2[p];
		vector<int> o;
		for(int i=0;i<l.size();i++){
			if(f[l[i]][p]){
				o.push_back(l[i]);
			}
		}
		l.clear();
		for(int i=0;i<o.size();i++){
			l.push_back(o[i]);
		}
		p--;
	}
	cout<<ans;
	return 0;
}