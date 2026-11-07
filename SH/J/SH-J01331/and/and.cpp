#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,c1,d,e=1,s1,s2,d1,d2,sum=0;
	int a[1000]={0};
	int b[1000]={0};
	int c[1000]={0};
	cin>>n>>m;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++){
		e=1;
		d=a[i];
		while(d!=0){
			c1=d%2;
			b[i]=b[i]+c1*e;
			e=e*10;
			d=d/2;
		}	
	}
	e=1;
	for(int i=0;i<=n-1;i++){
		d1=b[i];
		for(int j=1;j<=n-1;j++){
			d2=b[j];
			while(d!=0){
				s1=d1%10;
				s2=d2%10;
				if(s1==1&&s2==1)
					c[sum]=c[sum]*e+1;
				else
					c[sum]=c[sum]*e+0;
				e=e*10;
				d1=d1/10;
				d2=d2/10;
			}
			sum++;
		}	
	}
}
 
 
 
 
 
 
 
 
