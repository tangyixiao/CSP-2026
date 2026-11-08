#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int a[20005];
int s=0;
int c=0;
int rjz(int a,int b){
	c=0;
	s=0;
	for(int i=1;i<=a&&i<=b;){
		c=c+(a%2&&b%2)*pow(2,s);
		a=a>>1;
		b=b>>1;
		s++;
	}
	return c;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	//freopen("string,in","r",stdin);
	//freopen("string,out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int zd=0;
	sort(a,a+n,cmp);
	for(int i=m+1;i<=n;i++){
		int p=0;
		for(int j=i-m;j<i;j++){
			if(j==i-m){
				p=rjz(a[j],a[j+1]);
			}else{
				p=rjz(p,a[j+1]);
			}
		}
		zd=max(zd,p);
	}
	cout<<zd;
	return 0;
} 
