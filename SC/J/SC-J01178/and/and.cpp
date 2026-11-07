#include<bits/stdc++.h>
using namespace std;
int a,m,aa[200000],o,oo[200000],t,mm[200000],l,p,u;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>m;
	for(int i=0;i<a;i++){
		cin>>aa[i];
		o=aa[i];
		while(o>0){
			o/=2;
			oo[i]++;
		}
		for(int j=oo[i];j>0;j--){
			if(aa[i]>=pow(2,j)){
				aa[i]-=pow(2,j);
				t+=pow(10,j-1);
			}
		}
		aa[i]=t;
		o=0;
		t=0;
	}
	for(int i=0;i<a;i++){
		for(int j=i;j<a;j++){
			for(int k=1;k<=oo[i];k++){
				if(oo[i]%pow(10,k)==oo[j]%pow(10,k))mm[i]++;
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=i;j<a;j++){
			if(mm[j]>t){
				t=mm[j];
			}
		}
		swap(aa[j],aa[i]);
		swap(oo[j],oo[i]);
		swap(mm[j],mm[i]);
		t=0;
	}
	for(int i=0;i<m;i++){
		for(int j=i;j<m;j++){
			if(aa[j]>t){
				t=aa[j];
			}
		}
		t=0;
	}
	for(int i=0;i<m;i++){
		for(int j=oo[m-1];j>0;j--){
			for(int k=i+1;k<oo[m-1];k++){
				if(aa[i]%pow(10,j)==aa[k]%pow(10,j))l++;
			}
			if(l==m)p+=pow(10,j);
		}
	}
	
	while(p>0){
		t++;
		u+=(p%pow(10,t)-p%pow(10,t-1))*(pow(2,t));
		p/=10;
	}
	cout<<u;
	return 0;
} 