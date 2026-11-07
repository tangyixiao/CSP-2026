#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	string b;
	int n;
	cin>>n;
	int l;
	char lin;
	int j=0;
	for(int i=0;i<n;i++){
		cin>>l>>lin;
		for(int q=0;q<l;q++){
			s[j]=lin;
			j++;
		} 
	}
	int a=0;
	for(int i=j;i>=0;i++){
		b[a]=s[i];
		a++;
	}
	int sum=0;
	for(int i=0;i<j;i++){
		if(s[i]!=b[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
