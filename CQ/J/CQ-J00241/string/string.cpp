#include <bits/stdc++.h>
using namespace std;
//int read(){
//	int x=0,f=1;
//	char ch=getchar();
//	while(!(ch>='0' and ch<='9')){
//		if(ch=='-') f=-1;
//		ch=getchar();
//	}
//	while(ch>='0' and ch<='9'){
//		x=x*10+(ch-'0');
//		ch=getchar();
//	}
//	return x*f;
//}
int n;
long long int a[200010],a2[200010];
char c[200010],c2[200010];
long long int dfs(int i,long long int i1,int j,long long int j1,long long int sum){
	cout<<i<<' '<<i1<<' '<<j<<' '<<j1<<' '<<sum<<'\n';
	if(i>=j){
		return sum;
	}
	if(c[i]==c[j]){
		if((a[i]-i1)>(a[j]-j1)){
			return dfs(i,i1+(a[j]-j1),j-1,0,sum);
		}
		else if((a[i]-i1)==(a[j]-j1)){
			return dfs(i+1,0,j-1,0,sum);
		}
		else{
			return dfs(i+1,0,j,j1+(a[i]-i1),sum);
		}
	}
	else{
		if((a[i]-i1)>(a[j]-j1)){
			return dfs(i,i1+(a[j]-j1),j-1,0,sum+(a[j]-j1));
		}
		else if((a[i]-i1)==(a[j]-j1)){
			return dfs(i+1,0,j-1,0,sum+(a[i]-i1));
		}
		else{
			return dfs(i+1,0,j,j1+(a[i]-i1),sum+(a[i]-i1));
		}
	}
}
long long int w,sum1,sum2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("","r",stdin);
	freopen("","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a2[i]>>c2[i];
	}
	int n1=1;
	c[1]=c2[1];
	a[1]=a2[1];
	for(int i=2;i<=n;i++){
		if(c2[i-1]==c2[i]) a[n1]+=a2[i];
		else a[++n1]=a2[i],c[n1]=c2[i];
	}
	n=n1;
	
	cout<<n<<'\n';
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' '<<c[i]<<'\n';
	}
	cout<<dfs(1,0,n,0,0);
	return 0;
}
