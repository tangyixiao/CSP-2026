#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	int cnt=0;
	
	long long a[100000005];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	string num[n];
	
	for(int i=1;i<=n;i++){
		string sum;
		while(n!=0){
			int n=a[i]%2;
			sum+=n;
		}
		for(int j=sum.size();j>=1;j--){
			num[i]+=sum[j];
		}
	}
	
	string number;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int x=1;x<=n;x++){
				if(num[i]==num[j]&&num[i]==num[x]&&num[j]==num[x]){
					cnt++;
				}
			}
		}
	}
	
	cout << cnt;
	return 0;
}
