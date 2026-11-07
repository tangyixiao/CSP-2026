#include<bits/stdc++.h>
using namespace std;
unsigned long long ulrd() {
	unsigned long long x=0;char c='l';
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();
	return x;
}
char crd() {
	char c=' ';
	while(c=='\t'||c=='\n'||c==' ')c=getchar();
	return c;
}
int a[200001]={};
char c[200001]={};
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=ulrd();
	long long sum=0,ans=0;
	for(int i=1;i<=n;i++){
		a[i]=ulrd(),c[i]=crd();sum+=a[i];
	}
	long long p=sum/2;
	if(sum%2==1)p++;
	int i=1,j=n,u=0,v=0;
	while(i<j){
		int x=a[i]-u,y=a[j]-v;
		bool l=c[i]!=c[j];
		if(x>y){
			ans+=y*l;
			u+=y,y=v=0,j--;
		}
		else if(x<y){
			ans+=x*l;
			v+=x,x=u=0,i++;
		}
		else ans+=x*l,u=v=0,i++,j--;
	}
	cout<<ans;
	return 0;
}