#include<bits/stdc++.h>
using namespace std;
long long a[200010],c[200010];
vector<pair<long long,long long> >pre,suf;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long sum=0,n=0;cin>>n;
	for(long long i=1;i<=n;i++){
		long long x;char ch;
		cin>>x>>ch;a[i]=x;
		c[i]=ch-'a'+1;sum+=x;
	}
	long long mid=0,cnt=0;
	mid=(sum+1)/2;
	for(long long i=1;i<=n;i++){
		cnt+=a[i];
		if(cnt>=mid){
			long long s=cnt-mid;
			long long p=a[i]-s;
			if(sum&1)p--;
			if(s)suf.emplace_back(make_pair(s,c[i]));
			if(p)pre.emplace_back(make_pair(p,c[i]));	
			for(long long j=i-1;j>=1;j--){
				pre.emplace_back(make_pair(a[j],c[j]));
			}
			for(long long j=i+1;j<=n;j++){
				suf.emplace_back(make_pair(a[j],c[j]));
			} 
			break;
		}
	}
	long long cc=0,ans=0;
	int j=0;sum=0;
	for(auto it:pre){
		long long x=it.first,y=it.second;
		if(y==cc){
			long long g=min(x,sum);
			x-=g;sum-=g;
		}else{
			long long g=min(x,sum);
			x-=g;sum-=g;ans+=g;
		}
		while(x){
			if(j==(int)suf.size())break;
			sum=suf[j].first;cc=suf[j].second;j++;
			if(y==cc){
				long long g=min(x,sum);
				x-=g;sum-=g;
			}else{
				long long g=min(x,sum);
				x-=g;sum-=g;ans+=g;
			}
		}
	} 
	cout<<ans;return 0;
}

/*
关注洛谷 hb314 ，欣赏时代巨作《周桐玥武的算法圣殿》 
*/