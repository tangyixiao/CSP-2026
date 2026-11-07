#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200010],vis[50],t,cnt,b[200010],c[200010],ans=pow(2,31)-1;
void f(int a){
	string c;
	int s=0;
	while(a>0){
		c+=(a%2)+'0';
		a/=2;
	}
	int l=c.size();
	for(int i=0;i<l;i++)s=s*10+(c[l-i-1]-'0');
	int i=0;
	while(s>0){
		if(s%10==1)vis[i]++;
		s/=10;
		i++;
	}
}
bool pd(int a,int b){
	string c;
	int s=0;
	while(a>0){
		c+=(a%2)+'0';
		a/=2;
	}
	int l=c.size();
	for(int i=0;i<l;i++)s=s*10+(c[l-i-1]-'0');
	int z=pow(10,t);
	if((s/z)%10==1)return 1;
	else return 0;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
		f(a[i]);
	}
	for(int i=30;i>=0;i--){
		if(vis[i]>=m){
			t=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(pd(a[i],t))b[++cnt]=a[i];
	}
	int ct=cnt;
	while(ct>m&&t>=0){
		t--;
		int x=0;
		if(vis[t]>=m){
			for(int i=1;i<=cnt;i++){
				if(b[i]!=-1&&!pd(b[i],t)){
					b[i]=-1;
					x++;
				}
				if(ct-x==m)break;
			}
			ct-=x;
			if(x==0)break;
		}
	}
	int k=0;
	for(int i=1;i<=cnt;i++){
	    if(b[i]!=-1)ans&=b[i],k++;
		if(k==m)break;	
	}
	cout <<ans;
	return 0;
}
