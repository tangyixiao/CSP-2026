#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
 freopen("card.in",r,"stdin");
 freopen("card.out",w,"stdout");
 int n,m;
 int a[n]
 for(int i=0,i<=n;i++){
 	cin >> a[i];
 	for(int j=0;j<=i;j++){
 		if(a[j]==a[i]){
 			for(int h=0;h<=j;h++){
 				if(a[h]>a[i]){
 					a[h]==0;
		 	}
		 	cout << i;
		 }
	 }
 }
 
return 0;
 }
