#include<bits/stdc++.h>

using namespace std;

char c[200005],S[200005];
int a[200005],n;
long long sum=0,halfsum,x=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		for(int j=sum-a[i]+1;j<=sum;j++)S[j]=c[i];
	}
	for(int i=1;i<=sum/2;i++){
		if(S[i]!=S[sum+1-i])x++;
	}
	cout<<x;
	return 0; 
} 
