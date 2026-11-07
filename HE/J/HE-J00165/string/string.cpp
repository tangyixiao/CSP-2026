#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long m;
	m=n;
	long long sum=0;
	vector<int> a(n);
	string s;
	vector<int> ss(n);
	for(int i=0;i<n;i++){
		long long q;
		char w;
		cin>>q>>w;
		a[i]=q;
		s[i]=w;
	}
	int i=0;
	while(a[i]){
		if(i==n-1){
			break;
		}
		if(s[i]==s[n-1]){
			if(a[i]>a[n-1]){
				a[i]-=a[n-1];
				a[n-1]=0;
				n-=1;
			}
			else{
				a[n-1]-=a[i];
				a[i]=0;
				i++;
			}
		}
		else{
			if(a[i]>a[n-1]){
				sum+=a[n-1];
				a[i]-=a[n-1];
				a[n-1]=0;
				n-=1;
			}
			else{
				sum+=a[i];
				a[n-1]-=a[i];
				a[i]=0;
				i++;
			}
		}
	}
	cout<<sum;
	return 0;
}
