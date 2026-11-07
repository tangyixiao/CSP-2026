#include  <bits/stdc++.h>
using namespace std;
int main(){
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
	const int N=1e+5;
		int n;
		long long sum=0; 
		long long int a[N];
		string s[N];
		char c[5];	cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i]>>c[i];

	}
		for(int i=0;i<n;i++){
		if(c[i]==c[i+1]){
				cout<<"0";
				return 0;
			}
	} 
int e=0;		
int m=0; 
for(int i=1;i<=n;i++){
			for(int j=1;j<=a[e];j++){
			s[i]+=c[m];
		
			
	}	e++;
	m++;
}
int z=1,y=n;
for(int i=1;i<=n;i++){
if(s[z]!=s[y]){
	sum++;
}
z++;
y--;
}
cout<<sum;
	return 0;
}
