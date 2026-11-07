#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
long long l;
long long a,j,d_a=0;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s=s+c;
		}
	}
	l=s.size();
	int m;
	if(l%2==1){
		m=l/2+1;
	}
	else{
		m=l/2;
	}
	j=0;
	for(int i=m;i<=l-1;i++){
		if(s[j]!=s[i]){
			d_a++;
		}
		j++;
	}
	cout<<d_a;
	return 0;
} 