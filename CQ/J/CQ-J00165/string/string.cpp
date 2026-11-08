#include<bits/stdc++.h>
#define int long long
using namespace std;
struct sb{
	int a;
	char b;
}arr[200005];
int sum1[200005][30];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	arr[0].a=0,arr[0].b='A';
	for(int i=1;i<=n;++i){
		int x;char y;
		cin>>x>>y;
		if(y==arr[cnt].b) arr[cnt].a+=x;
		else arr[++cnt].a=x,arr[cnt].b=y;
	}
	n=cnt;
	if(cnt==1){
		cout<<0;
		return 0;
	}
	arr[n+1].a=0,arr[n+1].b='A'; 
	for(int i=n;i>=1;--i){
		sum1[i][0]=sum1[i+1][0]+arr[i].a;
		for(int j=1;j<=26;++j) sum1[i][j]=sum1[i+1][j];
		sum1[i][arr[i].b-'a'+1]+=arr[i].a;
	}
	int less=0,id=n,k=0;
	for(int i=1;i<=id;++i){
		int l=i,r=id,ans=id;
		if(arr[i].a<=less){
			if(arr[id+1].b!=arr[i].b) k+=arr[i].a;
			less-=arr[i].a;
			continue;
		}
		while(l<=r){
			int m=(l+r)>>1;
			if(abs(sum1[m][0]-sum1[id+1][0])+less<=arr[i].a) r=m-1,ans=m;
			else l=m+1;
		}
		k+=arr[i].a-sum1[ans][arr[i].b-'a'+1]+sum1[id+1][arr[i].b-'a'+1];
		if(arr[id+1].b==arr[i].b) k-=less;
		int sum=abs(sum1[ans][0]-sum1[id+1][0])+less;
		if(sum<=arr[i].a){
			less=arr[i].a-sum;
			if(arr[ans-1].b==arr[i].b) k-=less;
			less=arr[ans-1].a-less;
			id=ans-2;
		}
		else{
			k+=sum1[ans][arr[i].b-'a'+1]-sum1[id+1][arr[i].b-'a'+1];
			k-=sum1[ans+1][arr[i].b-'a'+1]-sum1[id+1][arr[i].b-'a'+1];
			if(arr[ans].b==arr[i].b) k-=(arr[i].a-less);
			less=sum-arr[i].a;
			id=ans-1;
		}
	}
	cout<<k;
	return 0;
}
//³õÈı11°àÌÆç÷º­ÖØÇìÒ»Ë«Ğ£»¨ 
