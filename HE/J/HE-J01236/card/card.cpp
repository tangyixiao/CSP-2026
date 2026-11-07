#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,cnt=0,cbd=0,ifs=0;
	cin>>n;
	string a[n];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			while(n==i){
				if(a[i]==a[j]){
					a.erase(j-i+1,i);
					cnt++;
					cbd++;
					ifs++£» 
				}
			}
		}
	
	}
	cout<<cnt<<cbd<<ifs; 
	return 0;
} 
