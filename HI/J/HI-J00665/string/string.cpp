#include<bits/stdc++.h>
using namespace std;

long long p[1000006]={0};

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	string b;
	long long num;
	int l=0;
	for(int i=1;i<=n;i++){
		cin>>num;
		cin>>b;
		p[i]=p[i-1]+num;
		for(int i=0;i<num;i++){
			a+=b[0];
		}
	}
	int h=a.size();
	for(int i=0;i<h/2;i++){
		if(a[i]!=a[h-i-1]){
			l++;
		}
	}
	cout<<l;
	return 0;
}
