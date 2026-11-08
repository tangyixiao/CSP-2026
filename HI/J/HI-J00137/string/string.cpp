#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4,s;
long long n,m,cnt,sum,a,q,w;
char c;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	scanf("%d",&n);
	for(long long i=1;i<=n;i++){
		scanf("%d",&a);
		cin>>c;
		for(long long j=1;j<=a;j++){
			s=s+c;
		}
		cnt=cnt+a;
	}
	q=s.size()/2;
	w=s.size()-q;
	for(long long i=0;i<q;i++){
		s1=s1+s[i];
	}
	for(long long i=w;i<s.size();i++){
		s2=s2+s[i];
	}
	for(long long i=0;i<q;i++){
		if(s1[i]!=s2[i]){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
