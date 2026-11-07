#include<bits/stdc++.h>
using namespace std;
long long a[100000000],sum;
char x[100000000];
long long b[127],m,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ok=0;
	scanf("%d",&n);
	string s;
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i],&x[i]);
		if(a[i]==1000000000){
			ok=1;
			s1+=a[i];
			b[x[i]]+=a[i];
			m=max(m,b[x[i]]);
		}
		else{
			for(int j=1;j<=a[i];j++){
				s+=x[i];
			}
		}
	}
	if(ok){
		cout<<s1-m;
		return 0;
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1])sum++;
	}
	cout<<sum;
	return 0;
}