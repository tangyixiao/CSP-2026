#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	long long s,e;
	char y;
	long long len;
};
node arr[200005];
long long sum[200005][30];
long long st[200005];
long long ed[200005];
int check_l(int l,int r,int nl){
	while(l<=r){
		int mid=(l+r)/2;
		if(st[mid]<=nl){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return r;
}
int check_r(int l,int r,int nr){
	while(l<=r){
		int mid=(l+r)/2;
		if(ed[mid]>=nr){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return l;
}
signed main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x>>arr[i].y;
		arr[i].s=arr[i-1].e+1;
		arr[i].e=arr[i].s+x-1;
		arr[i].len=x;
		st[i]=arr[i].s;
		ed[i]=arr[i].e;
	}
	for(int i=1;i<=n;i++){
		int kind=arr[i].y-'a'+1;
		for(int j=1;j<=26;j++){
			sum[i][j]=sum[i-1][j];
		}
		sum[i][kind]+=arr[i].len;
	}
	long long M=arr[n].e/2;
	long long ans=0;
    int ww=1e18;
	for(int i=1;i<=n;i++){
		if(arr[i].s>=M+1){
			break;
		}
        arr[i].e=min(arr[i].e,M);
		long long nl=(arr[n].e-(arr[i].e)+1);
		long long nr=(arr[n].e-(arr[i].s)+1);
        // nr=min(nr,ww);
		int j=check_l(i,n,nl);
		int k=check_r(i,n,nr);
		int nj=j+1,nk=k-1;
		int kind=arr[i].y-'a'+1;
		if(nj<=nk){
			for(int j=1;j<=26;j++){
				if(kind==j)continue;
				ans+=sum[nk][j]-sum[nj-1][j];
			}
		}
        ww=nr;
		// cout<<ans<<endl;
        // if(i==4){
        //     cout<<nl<<" "<<nr<<endl;
        //     cout<<j<<" "<<k<<endl;
        // }
		if(arr[j].y!=arr[i].y){
			ans+=min(arr[j].e,nr)-nl+1;
		}
		if(arr[k].y!=arr[i].y&&j!=k){
			ans+=nr-max(nl,arr[k].s)+1;
		}
		// cout<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
