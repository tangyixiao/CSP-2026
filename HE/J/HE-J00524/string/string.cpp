#include<bits/stdc++.h>
using namespace std;
int a,d=0;
string b,c,c2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a>>b;
    	d=d+a;
    	for(int i=1;i<d;i++){
    		c+=b;
		}
	}
	cout<<"0";
	return 0;
}
