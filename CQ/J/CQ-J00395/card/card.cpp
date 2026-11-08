#include<bits/stdc++.h>
 using namespace std;
 int a[300005];
 vector< int > v;
 int main(){
 	//freopen("","r",stdin);
 	//freopen("","w",stdout);
 	int n,m;
 	cin>>n>>m;
 	for(int i=1;i<=n;i++){
 		cin>>a[i];
	 }
	 for(int i=1;i<=n;i++){
 		for(int j=i;j<=n;j++){
 			bool f=0;
 			for(int k=0;k<v.size();k++){
 				if(a[j]==v[k]){
 					v.erease(v.begin()+k,v.end);
				 }
			 }
		 }
	 }
 	return 0;
 }

 
