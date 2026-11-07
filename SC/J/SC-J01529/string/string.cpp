#include<bits/stdc++.h>
using namespace std;
int n;
const int N=2e5+10;
long long a[N];
char s[N];
string S;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		for(int j=1;j<=a[i];j++){
			S+=s[i];
		}
	}
	for(int i=0;i<(int)S.size()/2;i++){
		if(S[i]!=S[(int)S.size()-i-1]){
			sum++;
		}	
	}
	cout<<sum;
	return 0;
}
