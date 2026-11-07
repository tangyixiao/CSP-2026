#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
//int b[200005][200005],c[200005],d[200005];
int f(int k,int t,int ans){
	if(t>m)return ans;
	if(k>n){
		return -1;
	}
	return max(f(k+1,t,ans),f(k+1,t+1,ans&a[k]));
}
//用递归肯定TLE，但我就是要偏分哈哈哈 
int main(){
	//快读不会写呀......
	cin.tie(0);
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	//int t,t1,t2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//b[i][i]=a[i];
	}

	cout<<f(1,1,-1);
	/*方法二：DP，但有问题 
	d[t]=1;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			b[i][j]=b[i][j-1]&a[j];
		}
	}
	for(int i=3;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(d[j]==0){
				if(c[i]<c[i-1]&a[j]){
					c[i]=c[i-1]&a[j];
					t=j;
				}
			}
		}
		d[t]=1;
	}
	cout<<c[m];
	*/
	return 0;
}
