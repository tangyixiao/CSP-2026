#include<bits/stdc++.h>
using namespace std;
long long f[10005][10005]; 
long long a[1000];
int n,m;
long long db(int x, int y){
	int w[100000],s[100000],c[100000];
	memset(w,0,sizeof(w));
	memset(s,0,sizeof(s));
	memset(c,0,sizeof(c));
	int xx1=0,yy1=0;
	while(x!=0){
		w[xx1]=x%2;
		x=x/2;
		xx1++;
	}
	while(y!=0){
		s[yy1]=y%2;
		y=y/2;
		yy1++;
	}
	int z=max(xx1,yy1);
	for(int i=0;i<z;i++){
		if(w[i]==s[i] and w[i]==1)c[i]=1;
		else c[i]=0;
	}
	
	long long cnt=0;
	for(int i=z-1;i>=0;i--){
		cnt=cnt*2+c[i];
	}
	return cnt;
}
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(f,-1,sizeof(f));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long maxn=-1e9;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			maxn=max(db(a[i],a[j]),maxn);
		}
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
