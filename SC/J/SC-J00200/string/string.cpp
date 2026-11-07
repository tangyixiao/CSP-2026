#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],s;
char b[200010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int i=1,j=n;
	while(i<j){
		if(b[i]!=b[j]){
			s+=min(a[i],a[j]);
		}
		if(a[i]<a[j]){
			a[j]-=a[i];
			i++;
		}else if(a[i]==a[j]){
			i++;
			j--;
		}else{
			a[i]-=a[j];
			j--;
		}
	}
	cout<<s;
	return 0;
}