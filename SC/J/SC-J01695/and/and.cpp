#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+50;
long long n,m;
long long len;

vector<long long>a;
vector<long long>b;

void readset(){
	freopen("and.out","w",stdout);
	freopen("and.in","r",stdin);
}

void pre_readset(){
	freopen("and5.in","r",stdin);
}

void read(){
	long long maxnum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long l;
		cin>>l;a.push_back(l);
		maxnum=max(maxnum,l);
	}
	
	while(maxnum){
		len++;
		maxnum>>=1;
	}
}

void solve(){
	for(int i=len-1;i>=0;i--){
		long long vn=a.size();
		if(vn==m)continue;
		long long sum=0;
		long long andy=1<<i;
		for(int j=0;j<vn;j++){
			sum+=bool((a[j]&andy)!=0);
		}
		
		
		if(sum>=m){
			for(long long j=0;j<vn;j++){
				if((a[j]&andy)!=0)b.push_back(a[j]);
			}
			a=b;
			b.clear();
		}
	}
	
	
}

void count(){
	long long vn=a.size();
	long long ans=a[0];
	for(long long i=1;i<vn;i++)ans&=a[i];
	
	cout<<ans;
}

int main(){
	readset();
	//pre_readset();
	
	read();
	solve();
	count();
	return 0;
}