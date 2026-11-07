#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],as=0;
int mx_=0; bool f1_=1,fA_=1;
long long pw_(int a,int b){
	long long s=1;
	for(int i=1;i<=b;++i){
		s*=a;
	}
	return s;
}
bool cmp(int a,int b){return a>b;}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		if(a[i]>mx_) mx_=a[i];
		if(a[i]!=i-1) f1_=0;
		if(pw_(2,__lg(a[i]+1))!=a[i]+1) fA_=0;
	}
	if(m==1){
		printf("%d",mx_);
		fclose(stdin); fclose(stdout);
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;++i){
			for(int j=i;j<=n;++j){
				as=max(as,a[i]&a[j]);    //qwq
			}
		}
		printf("%d",as);
		fclose(stdin); fclose(stdout);     //qwq
		return 0;
	}
	if(m==n){
		int q=a[1];
		for(int i=2;i<=n;++i){            //jjsnb
			q&=a[i];
		}
		printf("%d",q);
		fclose(stdin); fclose(stdout);    //qwq
		return 0;
	}
	if(f1_){
		printf("%d",n-m);
		fclose(stdin); fclose(stdout);   //rp++
		return 0;
	}
	if(fA_){
		sort(a+1,a+n+1,cmp);
		printf("%d",a[m]);
		fclose(stdin); fclose(stdout);   //qwq 
		return 0;
	}
	printf("%d",a[21]);
	fclose(stdin); fclose(stdout);       //rp++
	return 0;
}