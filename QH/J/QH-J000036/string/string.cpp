#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
	}
	long long sum=0;
	int t=0;
	for(int i=1,j=n; i<=j;){
		if(c[i]!=c[j]){
			if(a[i]==a[j]){
				sum+=a[i];
				i++;
				j--;
			}else if(a[i]>a[j]){
				sum+=a[j];
				a[i]-=a[j];
				j--;
//				a[j]=0;
			}else{
				sum+=a[i];
				                                                                                                                                                   
				a[j]-=a[i];
				i++;
//				a[i]=0;
			}
		}else{
			if(a[i]==a[j]){
				i++;
				j--;
			}else if(a[i]>a[j]){
				
				a[i]-=a[j];
				j--;
//				a[j]=0;
			}else{
				                                                                                                                                                   
				a[j]-=a[i];
				i++;
//				a[i]=0;
			}
		}
	}
//	for(int i=1; i<=n; i++){
//		sum+=a[i];
//		cout<<a[i]<<endl; 
//	}
	cout<<sum;
	return 0;
}
