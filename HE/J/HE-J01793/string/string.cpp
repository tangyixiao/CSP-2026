#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum;
string s,c,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c;
		for(int j=0;j<a[i];j++){
			s+=c;
		}
	} 
	long long l=s.size();//³¤ 
	for(int i=l-1;i>=0;i--){
		b+=s[i];
	}
	if (b==s){
		cout<<0;
		return 0;
	}
	for(int i=0;i<l;i++){
		if (s[i]!=s[l-1-i]){
			sum++;
			for(int j=0;j<26;j++){
				s[i]='a'+j;
				if (s[i]==s[l-1-i]){
					break;
				}
			}
		}
	}
	cout<<sum;
	return 0;
} 

