#include <bits/stdc++.h>
using namespace std;
char a[1000000+1];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    int m;
    int temptemp=0;
    for(int i=1;i<=n;i++){
    	int t=0;
    	char temp;
    	cin>>t>>temp;
    	for(int i=temptemp+1;i<=temptemp+t;i++){
    		a[i]=temp;
		}
		temptemp+=t; 
		m=temptemp;
	}
	int l=0,r=m+1;
	int cnt=0;
	while(l<r){
	    l++;r--;
	    if(a[l]!=a[r]){
	    	cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
