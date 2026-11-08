#include<bits/stdc++.h>
using namespace std;

long long brr[200005];
long long arr[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		
		long long x=arr[i];
		int m=1;
		while(x!=0){
			brr[i]+=(x%2)*m;
			m*=10;
			x/=2;
		}
		//cout<<brr[i]<<endl;
	}
	/*
	int anss=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<=n;i++){
			int ans=0;
			int a=brr[i];
			int b=brr[j];
			int w=a%10;
			int v=b%10;
			int z=2;
			//cout<<w<<v<<endl;
			if(w==v&&w==1){
				ans++;
			}
			a/=10;
			b/=10;
			//cout<<w<<" "<<v;
			while(a!=0&&b!=0){
				w=a%10;
				v=b%10;
				cout<<w<<" "<<v;
				if(w==v&&w==1) ans+=z;
				z*=2; 
				a/=10;
				b/=10;
			}
			if(anss<ans) anss=ans;
		}
	}
	cout<<anss;*/
	sort(arr+1,arr+1+n);
	cout<<arr[n];
	return 0;
}
