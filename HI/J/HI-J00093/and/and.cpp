#include<bits/stdc++.h>
using namespace std;
const int N=2e5+67;//676767
long long n,m,a[N],max1=-1;
bool vis[N];
bool cmp(int a,int b){
	return a>b;
}
void dfs(long long ans,long long k){
	if(k==n){
		if(ans>max1)max1=ans;
		return;
	}
	for(long long i=1;i<=n;i++){
		if(vis[i]==false){
			vis[i]=true;
			dfs(ans&a[i],k++);
			vis[i]=false;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//特例A解法：数字越大&的结果越大 ，排序找前M个最大值 
	/*排序优先级：1、数字越大越好 
				  2、越接近2^k-1越好  
				 
	  分成k个区，每个区的大小是2^(k-1)到2^k-1,再比大小 
	*/
	
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	} 
	if(m==1){
		sort(a+1,a+2+n,cmp);
		cout<<a[1];
	}else if(n<=20){
		dfs(1,0);
		cout<<max1;
	}else{
		sort(a+1,a+2+n,cmp);
		int sum=1;
		for(int i=1;i<=m;i++){
			sum=sum&a[i];
		}
		cout<<sum;
	}
	return 0;
}
