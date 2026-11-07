#include<bits/stdc++.h>
using namespace std;
long long sl[100005],n,ans,zs;
bool pd=1;
char zm[100005];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sl[i]>>zm[i];
		zs+=sl[i];
	}for(int i=0;i<n;i++){
		if(zm[0]!=zm[i]){
			pd=0;
		}
	}if(pd!=0){
		cout<<0;
		return 0;
	}
	for(int i=0;i<n/2;i++){
		if(zm[i]!=zm[n-i-1]){
			if(sl[i]<=sl[n-i-1]){
				ans+=sl[i];
			}
		}
	}cout<<ans;
	return 0;
} 