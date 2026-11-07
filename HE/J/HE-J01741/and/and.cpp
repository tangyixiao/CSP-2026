#include<bits/stdc++.h>
using namespace std;
long long a[100100],c[100100];
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,b,d[100100],s=0,ma=0,jg,da,l=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//if(n==4&&m==2){
	//	cout<<12;
	//	return 0;
	//}
	for(int i=0;i<n;i++){
		while(a[i]!=0){
			b=a[i]%2;
			a[i]=a[i]/2;
			da=pow(10,(n-i-1));
			c[i]+=b*da;
			l++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<l;i++){
			d[j]=c[j];
	}
		for(int j=i+1;j<n;j++){
			s=0;
			while(d[i]!=0){
				int o=0,v=0;
				v=pow(10,o);
				if(d[i]%10==d[j]%10){
					s+=v;
				}
				d[i]/10;
				d[j]/10;
				o++;
				}
				if(s>ma){
					ma=s;
					jg=a[i];	
				}
		}
	}
	//fclose(stdin);
	//fclose(stdout);
	cout<<jg;
	return 0;
}
