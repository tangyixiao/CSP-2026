#include <iostream>
using namespace std;
const int N=2e5+10;
int n,m;
long long a[N],ans,sum[N];
bool check(long long x){//ÅÐ¶ÏxÊÇ·ñÎª2^k-1£» 
	while(x){
		if (x%2==0) return 0;
		x/=2;
	}
	return 1;
}
void dfs(int i,int x,long long sum){
	if (x==m){
		ans=max(ans,sum);
		return ;
	}
	else if (n-i+1+x<m){
		return;
	}
	if (x>0) dfs(i+1,x+1,sum&a[i]);
	else dfs(i+1,1,a[i]);
	dfs(i+1,x,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	bool f1=1,f2=1;//13,16 17 
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (m==1) ans=max(ans,a[i]);//6
		else if (n==m){//7
			if (i==1) ans=a[i];
			else ans&=a[i];
		}
		else if (!check(a[i])) f1=0;//13
		else if (a[i]>4) f2=0;//16 17
	}
	if (n==m||m==1) cout << ans;//6,7
	else if (m==n-1){//11 12
		for (int i=1;i<=n;i++){
			long long x;
			if (i!=1) x=a[1];
			else x=a[2];
			for (int j=(i==1?3:2);j<=n;j++){
				if (i!=j){
					x&=a[j];
				}
			}
			ans=max(ans,x);
		}
		cout << ans;
	}
	else if (f1){//13??
		for (int i=1;i<=m;i++){
			for (int j=1;j<=n-i;j++){
				if (a[j]>a[j+1]){
					swap(a[j],a[j+1]);
				}
			}
		}
		cout << a[n-m+1];
	}
	else if (f2){//16 17
		int nn[4]{};
		for (int i=1;i<=n;i++){
			nn[a[i]]++;
		}
		if (m<=nn[3]) cout << 3;
		else{
			m-=nn[3];
			if (m<=nn[2]) cout << 2;
			else if ((m<=nn[1])) cout << 1;
			else cout << 0;
		}
	}
	else{
		dfs(1,0,0);
		cout << ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
