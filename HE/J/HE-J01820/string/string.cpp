#include<bits/stdc++.h>
using namespace std;
int a[2*100000+10][3];int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;int b;
		cin>>b>>c;
		a[i][1]=c-'a'+1;
		a[i][2]=b;
	}
	int l=1,r=n;unsigned long long ans=0;
	while(l<r){
		if(a[l][1]==a[r][1]){
			if(a[l][2]==a[r][2]){
				l++;r--;
			}else{
				if(a[l][2]>a[r][2]){
					a[l][2]-=a[r][2];
					r--;
				}else{
					a[r][2]-=a[l][2];
					l++;
				}
			}
		}else{
			if(a[l][2]==a[r][2]){
				ans+=a[l][2];l++;r--; 
			}else{
				if(a[l][2]>a[r][2]){
					ans+=a[r][2];
					a[l][2]-=a[r][2];
					r--;
				}else{
					ans+=a[l][2];
					a[r][2]-=a[l][2];
					l++;
				}
			}	
		}
	}
	cout<<ans;
	return 0;
}
