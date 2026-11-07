#include<bits/stdc++.h>
#define N 200003
#define M 53
using namespace std;
typedef long long ll;
int a[N],n,m;
void input(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
}
int ans=-1;
void dfs(int k,int cnt,int ret){// k~n
	if(cnt==m){
		ans=max(ans,ret);
		return;
	}
	if(k==n+1)return;
//	printf("%d %d %d\n",k,cnt,ret);
	for(int i=k;i<=n;i++)
		dfs(i+1,cnt+1,(cnt==0?a[i]:(ret&a[i])));
}
void bf(){
	dfs(1,0,0);
	printf("%d\n",ans);
}
void solvem1(){
	int ret=-1;
	for(int i=1;i<=n;i++)
		ret=max(ret,a[i]);
	printf("%d\n",ret);
}
void solvem2(){
	int ret=-1;
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<=n;i++){
		if(a[i]<ret)break;
		for(int j=i+1;j<=n;j++){
			if(a[j]<ret)break;
			ret=max(ret,(a[i]&a[j]));
		}
	}
//			ret=max(ret,(a[i]&a[j]));
	printf("%d\n",ret);
}
void solvemn(){
	int ret=a[1];
	for(int i=2;i<=n;i++)
		ret=(ret&a[i]);
	printf("%d\n",ret);
}
map<int,int> mp;
bool ext[M];
bool okA(){
	for(int i=1;i<=n;i++)
		if((a[i]&(a[i]+1))!=0)return 0;
	return 1;
}
void solveA(){
	for(int i=1;i<=n;i++)
		mp[a[i]]++;
	for(int j=0;j<=30;j++)
		if(mp[(1<<j)-1]!=0)ext[j]=1;
	int ret=-1,cnt=0,j=30;
	while(cnt<m){
		if(ext[j]){
			cnt++;
			ret=(1<<j)-1;
		}
		j--;
	}
	printf("%d\n",ret);
}
bool okB(){
	if((n&(n-1))!=0)return 0;
	for(int i=1;i<=n;i++)
		if((a[i]-i+1)!=0)return 0;
	return 1;
}
void solveB(){
	printf("%d\n",n-m);
}
bool okaile4(){
	for(int i=1;i<=n;i++)
		if(a[i]>=4)return 0;
	return 1;
}
void solveaile4(){
	for(int i=1;i<=n;i++)
		mp[a[i]]++;
	if(m<=mp[3])printf("3\n");
	else if(m<=mp[3]+mp[2])printf("2\n");
	else if(m<=mp[3]+mp[1])printf("1\n");
	else printf("0\n");
}
void solve(){
	sort(a+1,a+1+n);
	int t=n,ans1=-1;
	while(1){
		int ret=a[t];
		int i=2,j=2;
		while(j<=m&&i<=n){
			if((ret&a[t+1-i])==0){
				i++;
				continue;
			}
			ret&=a[t+1-i];
			j++,i++;
		}
		if(j==m+1)// ans1=max(ans1,ret);
			{
				printf("%d\n",ret);
				break;
			}
		t--;
	}
}
int main(){// Trick or Treat!
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	input();
	if(m==1)solvem1();
	else if(m==2)solvem2();
	else if(m==n)solvemn();
	else if(okA())solveA();
	else if(okB())solveB();
	else if(okaile4())solveaile4();
	else if(n<=20)bf();
	else solve();
//	solve();
	return 0;
}
