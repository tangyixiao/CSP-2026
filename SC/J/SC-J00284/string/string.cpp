#include<bits/stdc++.h>
using namespace std;
const int N=1e9+1;
int main(){
	/*freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);*/
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	long long L=0,l=0,sum=0;
	char a[10001],a1[10001],a2[10001];
	long long b[100001];
	for(int i=1;i<=n;i++){
		cin>>b[i]>>a[i];
		
	}
	for(int i=1;i<=n;i++){
	    l+=b[i];
		for(int j=L+1;j<=l;j++){
			a1[j]=a[i];
			a2[j]=a[i];
		}
		L+=b[i];
	}
	reverse(a1+1,a1+1+l);
	for(int i=1;i<=l;i++){
		if(a1[i]!=a2[i])sum++;
	}
	cout<<sum/2;
	return 0;
} 