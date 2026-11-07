#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string a;
	for(int i=0;n>i;i++){
		int t1;
		string t2;
		cin>>t1>>t2;
		for(int j=0;t1>j;j++){
			a+=t2;
		}
	}
	long long he=0;
	for(int i=a.size()-1;0<=i;i--){
		if(a[i]!=a[a.size()-1-i]){
			he++;
			a[i]=a[a.size()-1-i];
		}
	}
	cout<<he;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

