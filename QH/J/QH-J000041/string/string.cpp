#include<bits/stdc++.h>
 using namespace std;
 int main(){
 	freopen("string.in","r",stdin);
 	freopen("string.out","w",stdout);
 	int n;
 	cin>>n;
 	long long total=0;
 	int num=0;
 	for(int i=0;i<n;i++){
 		long long  a;
 		cin>>a;
 		char c;
 		cin>>c;
 		if(c=='a'){
 			total+=a;
 			num++;
		 } 		
	 }
	 if(num==n){
	 	cout<<0;
	 	return 0;
	 }
 	cout<<total;

	
		return 0;
}
