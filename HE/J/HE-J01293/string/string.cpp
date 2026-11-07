#include<bits/stdc++.h>
using namespace std;
bool k[1000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a[1000]={0};
	long long b[1000]={0};
	string d,c;
	for(long long i=1;i<=n;i++){
		cin>>b[i]>>d;
		for(long long j=1;j<=b[i];j++){
			c=c+d;
}
	}
	//if(c==d[0]){
//		cout<<0;
//		return 0;
//	}
	long long z=c.size();
	long long x=0;
	long long y=0;
	for(long long i=1;i<=c.size();i++){
		if(i==z){
			break;
		}
		if(c[i]!=c[z]){
			c[z]=c[i];
			x++;
		}
		z--;
	}
	cout<<x;
	return 0;
} 
