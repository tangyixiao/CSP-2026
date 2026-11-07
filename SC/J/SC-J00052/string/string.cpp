#include<bits/stdc++.h>
using namespace std;
int f[200010];
char a[200010];
int main(){
	freopen("string.in","r","std.in");
	freopen("string.out","w","std.out");
	long long l,ans=0;
	cin>>l;
	for(int i=1;i<=l;i++){
		cin>>f[i]>>a[i];
	}
	for(int i=1;i<=l;){
		for(int j=l;j>=1;){
			if(i>=j){
				cout<<ans;
				return 0;
			}
			if(a[i]==a[j]){
				if(f[i]>f[j]){
					f[i]-=f[j];
					j--;
				}
				else if(f[i]==f[j]){
					ans+=0;
				}
				else{
					f[j]-=f[i];
					i++;
				}
			}
			else{
				if(f[i]>f[j]){
					f[i]-=f[j];
					j--;
					ans+=f[i];
				}
				else if(f[i]<f[j]){
					f[j]-=f[i];
					i++;
					ans+=f[j];
				}
				else{
					ans+=f[i];
					i++;
					j--;
				}	
			}
		}
	}
	return 0;
} 