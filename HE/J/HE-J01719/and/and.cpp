#include<bits/stdc++.h>
using namespace std;
long long f[200005];
int main(){
	long long a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>f[i];
	}
	if(b==2){
		int max=-1;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=a;j++){
				if((f[i]&f[j]>max)&&(i!=j)){
					max=f[i]&f[j];
				}
			}
		}
		cout<<max;
	}
	else if(b==a){
		int ans=f[1]&f[2];
		for(int i=3;i<=a;i++){
			ans=ans&f[i];
		}
		cout<<ans;
	}
	else if(b==a-1){
		int ans,max=-1;
		for(int i=1;i<=a;i++){
			int ans=f[1]&f[2];
			for(int j=3;j<=a;j++){
				if(f[j]!=f[i]){
					ans=ans&f[i];
				}
			}
			if(ans>=max){
				max=ans;
				ans=0;
			}
		}
		cout<<ans;
	}
}
