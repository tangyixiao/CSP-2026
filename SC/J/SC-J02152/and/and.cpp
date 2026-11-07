#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000000],n,m,s,c[1000000],c1[1000000],s1,da;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		int b,ws;
		b=a[i];
		while(b!=0&&b!=1){
			c[i]=c[i]*10+b%2;
			b=b/2;
			ws++;
		}
		int d=c[i];
		c[i]=0;
		for(int j=1;j<=ws;j++){
			c[i]=c[i]*10+d%2;
			d=d/2;
		}
		c1[i]=ws;
	}
	s=c[1];
	for(int i=2;i<=m;i++){
		for(int j=1;j<=c1[i];j++){
			if(s%10==c[i]%10&&s%10==1){
				s1=s1*10+1;
				s=s/10;
				c[i]=c[i]/10;
			}else{
				s1=s*10;
				s=s/10;
				c[i]=c[i]/10;
			}
		}
		int s2=s1;
		s1=0;
		for(int j=1;j<=c1[i];j++){
			s1=s1*10+s2%10;
			s2=s2/10;
		}
		s=s1;
		s1=0;
	}
	int cf=1,s4=1;
	while(s!=0){
		s4=s4*2;
		da=da+s%10*s4;
		s=s/10;
	}
	cout<<da;
	return 0;
}