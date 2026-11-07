#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("string.in",'r',stdin);
//	freopen("string.out",'w',stdout);
	long long n,num=0;
	cin >> n;
	string k;
	long long longth=0;
	for(long long i=0; i<n; i++){
		long long a;
		char b;
		cin >> a >> b;
		for(long long j=1; j<=a; j++){
			k[longth]= b;
			longth++;
		}
	}
	if(longth%2==0){
		for(long long i=0; i<=longth/2; i++){
			if(k[longth-i-1]!=k[i]){
				num++;
			}
		}
	} else if(longth%2==1){
		for(long long i=0; i<=(longth-1)/2; i++){
			if(k[longth-i-1]!=k[i]){
				num++;
			}
		}
	}
	cout << num << endl;
//	long long n,num=0,longth=0;
//	cin >> n;
//	long long m[n];
//	char mm[n];
//	for(int i=0; i<n; i++){
//		cin >> m[i] >> mm[i];
//		longth+=m[i];
//	}
//	if(longth%2==1){
//		for(long long i=0; i<longth; i++){
//			
//		}
//	}
	return 0;
}
