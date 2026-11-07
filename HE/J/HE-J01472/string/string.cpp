#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.ont","w",stdout);
	int n;
	cin>>n;
	int num[200000];
	char l[200000];
	for(int i=0;i<n;i++){
		cin>>num[i]>>l[i];
	}
	char a[200000];
	if(n%2==1){
		for(int i=0;i<n/2;i++){
			if(num[1]!=l[n-i-1]){
				sum+=num[i];

			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
