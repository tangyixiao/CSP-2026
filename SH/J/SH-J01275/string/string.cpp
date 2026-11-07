#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r");
	freopen("string.out","w");
	long long n,ans=0;
	string a="";
	cin>>n;
	for (int i=0;i<n;i++){
		int x;
		cin>>x;
		char y;
		cin>>y;
		long long lam=1;
		string cam="";
		cam+=y;
		while(x>0){
			if (x<lam){
				for (int j=0;j<x;j++){
					a+=y;
				}
				x=0;
			}else{
				a+=cam;
				cam+=cam;
				x-=lam;
				lam*=2;
				
				
			}
		}
	}
	for (long long i=0;i<(long long)a.size()/2;i++){
		if (a[i]!=a[a.size()-1-i]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
