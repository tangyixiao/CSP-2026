#include <bits/stdc++.h>
using namespace std;
struct{
	int a;
	char b;
}s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].a>>s[i].b;
	}
	for(int i=0;i<n;i++){
		if(s[i].b!=s[n-i-1].b){
			if(s[i].a==s[n-i-1].a){
				sum+=s[i].a;
				s[n-i-1].a=s[i].a;
				s[n-i-1].b=s[i].b;
			}else if(s[i].a>s[n-i-1].a){
				sum+=s[i].a;
				s[n-i-1].a=s[i].a;
				s[n-i-1].b=s[i].b;
				s[n-i-2].a-=s[i].a-s[n-i-1].a;
			}else if(s[i].a<s[n-i-1].a){
				sum+=s[n-i-1].a;
				s[i].a=s[n-i-1].a;
				s[i].b=s[n-i-1].b;
				s[i+1].a-=s[n-i-1].a-s[i].a;
			}
		}
	}
	cout<<sum;
	return 0;
}
