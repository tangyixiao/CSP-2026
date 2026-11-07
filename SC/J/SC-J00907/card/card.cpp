#include<bits/stdc++.h>
using namespace std;
int n,m,a[50005];
int main(){
	freopen("card.in","r",stdin);
 	freopen("card.out","w",stdout);
 	cin >> n >> m;
 	for(int i=1;i<=n;i++){
 		cin >> a[i];
	}
	int cnt=n;
	while(cnt){
		for(int i=1;i<=cnt;i++){
			for(int j=i+1;j<=cnt;j++){
				if(a[j]==a[i])
			}
		}
	}
	cout << 
}