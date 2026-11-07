#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int N=2e5+10;
char c[N];
int a[N];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, len=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	} 
	
	long long res=0;
	int i=1, j=n;
	while(i<j){
		if(c[i]!=c[j]){
			res+=a[i]+a[j]; 
		}
		i++, j--;
	}
	
	cout<<(res+1)/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

