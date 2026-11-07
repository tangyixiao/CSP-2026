#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int b[N],c[N],s1,s2;
void f(int a){
	s1=0;
	for(int i=0;;i++){
		if(a!=0){
			b[i]=a%2;
			s1++;
		    a/=2;
		}else break;
	}
}
void f1(int a){
	s2=0;
	for(int i=0;;i++){
		if(a!=0){
			c[i]=a%2;
			s2++;
		    a/=2;
		}else break;
	}
}
int f2(){
	int l=min(s1,s2);
	for(int i=0;i<l;i++){
		if(c[i]==1&&b[i]==1)c[i]=1;
		else c[i]=0;
	}
	int s=0,s3=1;
	for(int i=0;i<l;i++){
		if(c[i]!=0){
			s+=s3;
		}
		s3*=2;
	}
	return s;
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+0,a+n);
	for(int i=0;i<m-1;i++){
		int c=a[n-1-i],d=a[n-2-i];
		f(c);
		f1(d);
		a[n-2-i]=f2();
	}
	cout<<a[n-m];
	return 0;
}