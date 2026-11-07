#include<bits/stdc++.h>
using namespace std;
const int N = 1e9+10;
long long a[N], b=0, k;
char c[N];
string str;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i]>>c[i];
		for(int j=0; j<a[i]; j++){
			str+=c[i];
		}
		b+=a[i];
	}
	if(b%2==0){
		for(int i=0; i<=b/2; i++){
			if(str[b/2-i]==str[b/2+1+i]){
				continue;
			}else{
				str[b/2-i]=str[b/2+1+i];
				k++;
			}
		}
	}else{
		for(int i=0; i<(b+1)/2; i++){
			if(str[(b-1)/2-i]==str[(b-1)/2+i]){
				continue;
			}else{
				str[b/2-i]=str[b/2+i];
				k++;
			}
		}
	}
	cout<<k;
	return 0;
}
