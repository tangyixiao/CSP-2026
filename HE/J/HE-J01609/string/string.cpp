#include<bits/stdc++.h>
using namespace std;
long long ans;
int main(){
	//freopen("string.in ","r",stdio);
	//freopen("string.out ","w",stdout);
	string z=" ";
    int n,a;
    char c;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a>>c;
    	for(int j=1;j<=a;j++){
    	z+=c;		
		}
	}
	int size;
	long long x;
	for(long long i=1;i<=(z,size-1)/2;i++){
		long long x='z';size-1-i;
		if(z[i]!=z[x])   ans++;
	}
	cout<<ans;	
	return 0;
}
