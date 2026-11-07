#include<bits/stdc++.h>
using namespace std;
typedef long long L;
const int N=2e5+10;
int n;
L a[N];
string s; 
char c[N];
L k=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()/2+1-i]){
			k++;
			s[i]=s[h];
		}
	}
	printf("%d",k);
	return 0;
} 