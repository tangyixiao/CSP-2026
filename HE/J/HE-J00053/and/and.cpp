#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,maxn=0,b=0;
    long long a[100000000000];
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
    for(int i=0;i<n;i++){
    	b=a[i];
    	for(int j=0;j<m;j++){
    		b=b^a[j];
		}
    	
    	if(maxn<b) maxn=b;
	}
	cout<<maxn;
	return 0;
}
