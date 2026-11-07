#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string c;
	int n,b,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b>>c;
		for(int j=0;j<b;j++){
			a+=c;
		}
	}
	int d=a.size();
	int e=d;
	for(int i=0;i<d/2;i++){
		if(a[i]!=a[e-i-1]){
			num++;
		}
	
	}
	cout<<num;
	
	
	return 0;
}
