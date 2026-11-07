#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s[100000];int u=0;int q[m];int v=0;
	sort(a,a+n,cmp);
	for(int i=0;i<m;i++){
		while(a[i]!=0){
			s[u]=a[i]%2;u++;a[i]=a[i]/2;}
			for(int i=u-1;i>0;i--){
				q[v]+=s[i]*pow(10,i);v++;
			}
	}
	sort(q,q+m,cmp);int z=0;
	int x;int y;x=q[0];y=q[1];int y1=0;;int x1=0;
	while(x){
		x=x/10;x1++;
	}
	while(y){
		y=y/10;y1++;
	}
	int x2[x1];int y2[y1];
	for(int i=x1;i>0;i++){
		int r=pow(10,i);
		x2[i]=x%r;
	}for(int i=y1;i>0;i++){
		int r1=pow(10,i);
		y2[i]=x%r1;
	}
	for(int i=max(x1,y1);i>=0;i--){
		if(x2[i]==y2[i]==1){
			if(i==0){
				z+=1;
			}else{
			z+=pow(2,i);}
		}
	}
	cout<<z;
	return 0;
}
