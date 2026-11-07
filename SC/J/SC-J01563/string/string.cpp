#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long a[200005];
	long long ans=0,cnt=0;
	cin>>n;
	char c[200005];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	cnt/=2;
	long long f=0;
	long long i=0,j=n-1;
	while(i<j){
		if(c[i]!=c[j]&&f==0){
			if(a[i]>a[j]){
				ans+=a[j];
				f=a[i]-a[j];
				j--;
			}
			else if(a[i]<a[j]){
				ans+=a[i];
				f=a[j]-a[i];
				i++;
			}
			else{
				ans+=a[i];
				f=0;
				i++;
				j--;
			}
		}
		else if(f!=0&&c[i]!=c[j]){	
			if(f>a[j]){
				ans+=a[j];
				f=f-a[j];
				j--;
			}
			else if(f<a[j]){
				ans+=f;
				f=a[j]-f;	
				i++;
			}
			else{	
				ans+=f;
				i++,j--;
				f=0;
			}
		}
		else if(c[i]==c[j]){
			if(f==0){
			if(a[i]<a[j]){
				f=a[j]-a[i];
				i++;
			}	
			else if(a[i]>a[j]){	
				f=a[j]-a[i];
				j--;
			}
			else{
				j--,i++;
			}
			}
			else
				if(f<a[j]){
				f=a[j]-f;
				i++;
			}	
			else if(f>a[j]){	
				f=f-a[j];
				j--;
			}
			else{
				i++,j--; 
				f=0;
			}
		}
	}
	cout<<ans; 
	return 0;
} 