#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+5];
	char b[n+5];
	long long t=0,sum=0,q=1,p=1;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		t+=a[i];
	}
	char c[t+5],w[t+5];
	for(int i=1;i<=n;i++){
		for(int j=a[i];j>=1;j--){
			c[q]=b[i];
			w[q]=b[i];
			q++;
		}
	}
	for(int i=1;i<=t;i++){
		if(w[t-i+1]!=c[i]){
			sum++;
		}
		w[t-i+1]=c[i];
		p=i+1;
		for(int j=t-i;j>=(t+1)/2;j--){
			if(w[j]!=c[p]){
				flag=0;
				break;
			}
			p++;
		}
		if(flag==1){
			break;
		}
		flag=1;
	}
	cout<<sum;
	return 0;
}