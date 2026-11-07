#include<bits/stdc++.h>
using namespace std;
long long n,sum=0;
char s[2000000000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	long long f=0;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a;
		cin>>c;
		for(int j=1;j<=a;j++){
			s[j+f]=c;
		}
		f+=a;
	}
	for(int i=1;i<=(f+1)/2;i++){
		if (s[i]!=s[f+1-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
