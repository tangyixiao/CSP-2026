#include<bits/stdc++.h>
using namespace std;
int n;
int f=0;
struct data{
	int shuliang;
	char zifu;
};
data a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].shuliang;
		cin>>a[i].zifu;
	}
	for(int i=0;i<n-1;i++){
		if(a[i].zifu!=a[i+1].zifu){
			f=1;
		}
	}
	if(f==0){
		cout<<0;
		return 0;
	}
	long long he=0,he1=0;
	for(int i=0;i<n/2;i++){
		he+=a[i].shuliang;
	}  
	for(int i=n/2;i<n;i++){
		he1+=a[i].shuliang;
	}  
	cout<<min(he,he1);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
