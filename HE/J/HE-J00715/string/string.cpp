#include<bits/stdc++.h>//60
using namespace std;
const int N=2e5+10;
const int N1=1e8+10;
int n;
long long a[N];
char b[N];
char s[N1];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	long long s1=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			s1++;
			s[s1]=b[i];
		}
	}
	long long o=0; 
	for(int i=1;i<=s1/2;i++){
		if(s[i]!=s[(s1+1)/2+i]){
			o++;
	    }
    }
    cout<<o;
	return 0;
}
