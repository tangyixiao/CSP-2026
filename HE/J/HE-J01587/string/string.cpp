#include<bits/stdc++.h>
using namespace std;
char a[200001];
long long q[200001];
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q[i];
		cin>>a[i];
	}
	long long i=0,j=n-1,sum=0;
	while(i<j){
		if(a[i]==a[j]){
			if(q[i]==q[j]){
				i++;
				j--;
			}else if(q[i]>q[j]){
				q[i]=q[i]-q[j];
				j--;
			}else{
				q[j]=q[j]-q[i];
				i++;
			}
		}else{
			if(q[i]<q[j]){
				sum+=q[i];
				q[j]=q[j]-q[i];
				i++;
			}else if(q[i]>q[j]){
				sum+=q[j];
				q[i]=q[i]-q[j];
				j--;
			}else{
				sum+=q[j];
				j--;
				i++;
			}
		}
	}
	cout<<sum;
	return 0;
} 
