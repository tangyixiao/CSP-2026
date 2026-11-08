#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5;
int n,m,a[N],b[32],c[32];
bool cmp(int x,int y){
	return x>y;
}
int f(int p,int p1){
	if(p==0)return 0;
	int s=1,sum=1;
	for(;s<p1;s++){
		sum*=2;
	}
	return sum;
}

int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int i=1;
	while(a[1]>1){
		b[i++]=a[1]%2;
		a[1]/=2;
	}
	b[i]=1;
	for(int i=2;i<=m;i++){
		int j=1;
		while(a[i]>1){
			c[j++]=a[j]%2;
			a[i]/=2;
		}
		c[j]=1;
		for(int k=1;k<=30;k++){
			if(b[k]==0||c[k]==0){
				b[k]=0;
			}
		}
		for(int k=1;k<=30;k++){
			c[k]=0;
		}
	}
	int x=0;
	for(int i=1;i<=30;i++){
		x+=f(b[i],i);
	}
	cout<<x;
	
	return 0;
}
