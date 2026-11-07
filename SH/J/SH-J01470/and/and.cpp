#include<bits/stdc++.h>
using namespace std;
int sumt(int a,int b){
	int m1=max(a,b),m2=min(a,b);
	a=m1;
	b=m2;
	string a1="",b1="";
	int ans=0,k=1;
	while(a){
		a1+=char(a%2+'0');
		a/=2;
	}
	while(b){
		b1+=char(b%2+'0');
		b/=2;
	}
	int j=a1.size()-b1.size();
	while(j--){
		b1+='0';
	}
	for(int i=0;i<a1.size();i++){
		if(a1[i]=='1' && b1[i]=='1') a1[i]=1;
		else a1[i]=0;
	}
	for(int i=0;i<a1.size();i++){
		ans+=k*a1[i];
		k*=2;
	}
	return ans;
}
int n,m,a[200001],num;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	num=a[n-1];
	for(int i=n-2;i>=n-m;i--){
		num=sumt(num,a[i]);
	}
	cout<<num;
	return 0;
}
