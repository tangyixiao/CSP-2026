#include<bits/stdc++.h>
using namespace std;
    long long l,a[100000],s=0,sum=0;
    char b[100000],d[1000000000];
int main(){
	freopen("string.cpp","r",stdin);
	freopen("string.cpp","w",stdout);
	cin>>l;
	for(int i=0; i<l; i++){
		cin>>a[i]>>b[i];
		for(int j=0; j<a[i]; j++){
			d[s]=b[i];
			s++;
		}
	}
	for(int i=0,j=s-1; i<s/2; i++){
		if(d[i]!=d[j]){
			sum++;
		}
		j--;
	}
	cout<<sum;
	return 0;
}


