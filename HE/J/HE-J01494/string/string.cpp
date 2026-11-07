#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],num=0,s,m; 
char c[100001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int j=n-1,i=0; 
	while(j!=i){
		if(a[i]>a[j]){
			m=a[i];
			s=a[i]-a[j];
			if(c[i]==c[j]){
				m-=s;
			}
			else{
				num+=a[j];
			}
			a[i]-=a[j];
			j--;
		}
		else if(a[j]>a[i]){
			m=a[j];
			s=a[j]-a[i];
			if(c[i]==c[j]){
				m-=s;
			}
			else{
				num+=a[i];
			}
			a[j]-=a[i];
			i++;
		}
		else{
			if(c[i]==c[j]){
				m-=s;
			}
			else{
				num+=a[i];
			}
			if(i+1!=j){
				i+=1;
				j-=1;
			}
			else{
				break;
			}
		}
	}
	cout<<num;
	return 0;
}
