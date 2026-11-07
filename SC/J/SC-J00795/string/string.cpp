#include<bits/stdc++.h>
using namespace std;
int main(){
   	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){

		int a;
		string b;
		cin>>a>>b;

        cnt+=a;
          
	}
	
	cout<<cnt/2;
}