#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005],s[100005],ma,k;
void f(int x){
	for(int g = x+1;g<=::k;g++){
		::b[g] = 0;
	}
	::k = x;
	return ;
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	} 
	int p = 0;
	for(int i = 1;i<=m;i++){
		for(int j = i;j<=n;j++){
			for(int g = i;g<=j;g++){
				if(b[g] == a[i]){
					f(g);
					break;
				}
			}
			b[k] = a[j];
			k++;
		}
		for(int j = 1;j<=n;j++){
			s[b[j]]++;
		}
		k = 0;
	}
	for(int i = 1;i<=m;i++){
		cout<<s[i]<<' ';
	}
	return 0;
}