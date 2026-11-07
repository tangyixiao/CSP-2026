#include<bits/stdc++.h>
using namespace std;
int main(){
	//feropen("and.in","r","std.in");
	//feropen("and.out","w","std.out");
	int n,m;
	int x;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;n++){
		if(a[i] and a[i+1]<a[i+1] and a[i+2]){
			x=a[i+1] and a[i+2];
		}
		else{
			x=a[i] and a[i+1];
		}
	}
	cout<<x;
	//fclose(std.in);fclose(std.out);
	return 0;
}
