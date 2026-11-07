#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,b;
	cin>>a>>b;
	long long c[100010];
	long long sum=0;
	for(int i=1;i<=a;i++){
		cin>>c[i];
		if(c[i]==c[i-1]){
			sum=c[i];
		}
	}
	cout<<sum;
	cout<<endl;
	
}
