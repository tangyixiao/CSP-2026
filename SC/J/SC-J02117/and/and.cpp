#include<bits/stdc++.h>
#define int long long
#define cin std::cin
#define cout std::cout
#define endl '\n'
using namespace std;
const int maxn=2e5+5;
const int maxm=35;
int n,m,a[maxn],cnt[maxn];
int new_a[maxn],new_cnt[maxn],tim=0;
bool vis[maxn][maxm],ans[maxm],vis1[maxn];
void init(){
	memset(vis,0,sizeof(vis));
	memset(vis1,0,sizeof(vis1));
	memset(cnt,0,sizeof(cnt));
	memset(new_cnt,0,sizeof(new_cnt));
	memset(ans,0,sizeof(ans));
}
int qpow(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum*=a;
		a*=a,b/=2;
	} return sum;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	init(); cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=0;j<=30;j++)
			if((a[i]>>j)%2==1) cnt[j]++,vis[i][j]=1;
//	for(int i=30;i>=0;i--) cout<<cnt[i]<<" ";
//	cout<<endl; // right on  
	bool flag=0; 
	int x; // int->bool sb 错误让我调了 20min
	//lazy 标记最大位
	for(int i=30;i>=0;i--){
		//cout<<i<<" "<<cnt[i]<<endl;
		if(cnt[i]>=m){
			x=i; flag=1;
			//cout<<x<<endl;
			break;
		}
	}
	if(!flag){ // 没有一列大于m,答案定为0
		cout<<"0"<<endl;
		return 0;
	}else{
		for(int i=1;i<=n;i++)
		if(vis[i][x]) new_a[++tim]=a[i];
//		for(int i=1;i<=tim;i++) cout<<new_a[i]<<" ";
//		cout<<endl;
		// find need
//		for(int i=1;i<=tim;i++)
//			for(int j=0;j<=30;j++)
//				if((new_a[i]>>j)%2==1) new_cnt[j]++;
//		for(int i=30;i>=0;i--) cout<<new_cnt[i]<<" ";
//		cout<<endl;
		ans[x]=1;
		for(int j=x-1;j>=0;j--){
			int cnt=0;
			for(int i=1;i<=tim;i++){
				if(vis1[i]) continue;
				if((new_a[i]>>j)%2==1) cnt++;
			}
			if(cnt>=m){
				for(int i=1;i<=tim;i++){
					if(vis1[i]) continue;
					if((new_a[i]>>j)%2==0) vis1[i]=1;
				}
				ans[j]=1;
			}
		}
	}
	int sum=0;
	for(int i=0;i<=n;i++)
	if(ans[i]) sum+=qpow(2,i);
	cout<<sum<<endl;
	return 0;
}
/*
1<=m<=n<=2e5,0<=a_i<long_long
&: 同为 1,不同为 0s
特殊性质 A 人话：选个最大的
特殊性质 B 人话：选前 m 个
*/