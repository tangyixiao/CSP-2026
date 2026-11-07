#include<bits/stdc++.h>
using namespace std;
int n,idx;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    string s;
    cin>>n;
    int a[n+5]={0};
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	idx+=a[i];
    	cin>>s;
	}
	idx=idx/2;
	cout<<idx;
	return 0;
}
