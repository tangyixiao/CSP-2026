#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
	string s="";
	cin>>n;
	cin>>a[0]>>c[0];
	long long gcd=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i]>>c[i];
		gcd=__gcd(a[i],gcd);
	}
	for(int i=0;i<n;i++){
		a[i]/=gcd;
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	long long l1,l2;
	if(s.size()%2){
		l1=(s.size()+1)/2;
		l2=l1;
	}else{
		l1=s.size()/2;
		l2=l1+1;
	}
	int cnt=0;
	l1--;
	l2--;
	while(l1>=0){
		if(s[l1]!=s[l2]){
			s[l2]=s[l1];
			cnt++;	
		}
		l1--,l2++;
	}
	cout<<cnt*gcd;;
	return 0;
}

