#include<bits/stdc++.h> 
using namespace std;
int sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a[100000001];
	char c[100000001];
	string s;
	int tot=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[j]=c[i];
			tot++;
		}
	}

	for(int i=1;i<=tot/2;i++){
		if(s[tot-i+1]!=s[i]){
			s[tot-i+1]=s[i];
			sum++;
		}
	}
	cout<<sum;
	
	return 0;
}