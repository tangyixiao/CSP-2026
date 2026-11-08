#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],_max=-0x3f3f3f3f;
bool f[200005];
bool cmp(int x,int y){
	return x>y;
}
void dfs(int x,int cnt){
	if(x>m){
		_max=max(_max,cnt);
		return;
	}
	for(int i=x;i<=n;i++){
		if(f[i]==0){
			f[i]=1;
			dfs(x+1,cnt&a[i]);
			f[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool pf=1;
	int nm=2147483647;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(n==m) nm=nm&a[i];
		if(a[i]>4) pf=0;
	}
	if(n==m){
		cout<<nm;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(n>2000){
		if(pf){
			int t[4]={0,0,0,0};
			for(int i=1;i<=n;i++){
				t[a[i]]++;
			}
			if(t[3]>=m){
				cout<<3;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			if(t[3]+t[2]>=m){
				cout<<2;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			if(t[3]+t[2]+t[1]>=m){
				cout<<1;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			cout<<0;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	dfs(1,2147483647);
	cout<<_max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
