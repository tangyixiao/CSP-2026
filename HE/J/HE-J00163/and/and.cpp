#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m;
int a[N];
struct node{
	int x;
	int w;
}a1[N];
bool cmp(node a,node b){
	return a.w>b.w;
}
int b[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool rrr=false;
	for(int i=1;i<=20;i++){
		if((1<<i)==n){
			rrr=true;
			break;
		}
	}
	int maxn=-0x3f3f3f3f;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		int tot=0;
		maxn=max(maxn,a[i]);
		a1[i].x=a[i];
		while(a[i]){
			if(a[i]&1){
				a1[i].w=tot;
			}
			a[i]/=2;
			tot++;
		}
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int sum=b[1];
		for(int i=2;i<=n;i++){
			sum&=b[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==2){
		int maxn1=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					maxn1=max(maxn1,b[i]&b[j]);
				}
			}
		}
		cout<<maxn1;
		return 0;
	}
	if(m==n-1){
		int sum=0;
		int maxn2=-0x3f3f3f3f;
		for(int i=1;i<=n;i++){
			if(i==1) sum=b[2];
			else sum=b[1];
			for(int j=1;j<=n;j++){
				if(j!=i){
					sum&=b[j];
					cout<<b[j]<<endl;
				}
			}
			cout<<sum<<endl<<endl;
			maxn2=max(maxn2,sum);
		}
		cout<<maxn2;
		return 0;
	}
	if(rrr){
		bool g=false;
		for(int i=2;i<=n;i++){
			if(b[i]!=b[i-1]){
				g=true;
				break;
			}
		}
		if(!g){
			cout<<n-2;
			return 0;
		}
	}
	sort(a1+1,a1+1+n,cmp);
	int ans=0;
	for(int i=1;i<=m;i++){
		if(i==1){
			ans=a1[i].x;
		}
		else{
			ans=ans&a1[i].x;
		}
	}
	cout<<ans;
	return 0;
}
