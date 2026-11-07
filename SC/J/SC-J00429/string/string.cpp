#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int a[N];
string c;
string s;
int len=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n; 
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
//		int b=a[i];
//		for(int j=0;j<b;j++){
//			s[j]=c[j];
//		}
//		b=0;
		s.push_back(a[i]*c[i]);
		len+=a[i];
	}
					

	for(int i=0;i<len/2;i++){
		for(int j=len-1;j>len/2;j--){
			if(s[i] != s[j]){
				ans++;
			}
		}
	}
	cout<<len/2;
	return 0;
}