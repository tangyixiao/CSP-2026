#include<iostream>
#include<algorithm>
using namespace std;
long long n,m,a[200010];
long long mx=-1,fmax=-1,N=1,smax=-1,po=-1;
void DFS(long long sum,int step,int cnt){
	if(step==n){
		if(cnt==m){
			mx=max(sum,mx);
		}
		return;
	}
	DFS(sum&a[step],step+1,cnt+1);
	DFS(sum,step+1,cnt);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	while(N<a[n-1]){
		N*=2;
		N++;
	}
	if(n<=20){
		DFS(N,0,0);
		cout<<mx;
	}else{
		if(m==1){
			cout<<a[n-1];
		}else if(m==2){
			for(int i=n-1;i>0;i--){
				po=max(po,a[i]&a[i-1]);
			}
			cout<<po;
		}else{
			long long t=a[n-1];
			for(int i=0;i<n-1;i++){
				t&=a[i];
			}
			cout<<t;
		}
	}
	return 0;
}
