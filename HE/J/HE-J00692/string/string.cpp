#include <bits/stdc++.h>
using namespace std;
struct node{
	long long st,en;
	char c;
};
vector<node> v;
int n;
long long a[200005];
char c[200005];
long long sum[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		sum[i]=sum[i-1]+a[i];
	}
	if(sum[n]%2){
		int mid=sum[n]/2+1;
		for(int i = 1;i <= n;i++){
			if(sum[i-1]+1<=mid&&sum[i]>=mid){
				v.push_back({sum[i-1]+1,mid-1,c[i]});
				v.push_back({mid+1,sum[i],c[i]});
			}
			else v.push_back({sum[i-1]+1,sum[i],c[i]});
		}
	}
	else{
		int mid=sum[n]/2;
		for(int i = 1;i <= n;i++){
			if(sum[i-1]+1<=mid&&sum[i]>=mid+1){
				v.push_back({sum[i-1]+1,mid,c[i]});
				v.push_back({mid+1,sum[i],c[i]});
			}
			else v.push_back({sum[i-1]+1,sum[i],c[i]});
		}
	}
	long long ans=0;
	int l=1,r=sum[n],ll=0,rr=n-1;
	while(l<r&&ll<rr){
		if(l>v[ll].en)ll++;
		if(r<v[rr].st)rr--;
		if(v[ll].c!=v[rr].c){
			ans++;
		}
		l++,r--;
	}
	cout << ans;
	return 0;
}
