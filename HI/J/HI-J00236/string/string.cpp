#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n=0,l=0,z=0,sum=0;
	cin>>n;
	string sl,s;
	int a[200005];
	for(int i=0;i<n;i++){
		cin>>a[i];

		l+=a[i];
		cin>>sl[i];
		for(int j=z;j<z+a[i];j++){
			s[j]=sl[i];
		}
			z=a[i];	
	}
for(int i=l/2+1;i<l;i++){
	if(s[0]!=s[i]){
		sum++;
	}
}
cout<<sum;
	return 0;
}

