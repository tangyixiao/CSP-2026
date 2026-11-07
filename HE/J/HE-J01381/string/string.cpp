#include<bits/stdc++.h> 
using namespace std;
int sum;
int r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	cin>>a;
	int w;
	char q;
	string b;
	int p=0;
	for(int i=1;i<=a;i++){
		cin>>w;
		cin>>q;
		for(int i=0;i<w;i++){
			b[p]=q;
			p++;
		}
	}r=p-1;
	for(int i=0;i<=p/2;i++){
		if(b[i]!=b[r]){
			b[r]=b[i];
			sum++;
		}
	}cout<<sum;
	return 0;
}
