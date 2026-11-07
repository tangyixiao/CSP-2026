#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	
	int n;
	cin>>n;
	long long a[200001];
	string chr="";
	for(int i=0;i<n;i++){
		int x;
		char c;
		cin>>x>>c;
		a[i]=x;
		chr+=c;
	}
	long long l=0,r=n-1,ans=0;
	while(l!=r){
		if(chr[l]==chr[r]){
			if(a[l]==a[r]){
				l++,r--;
			}
			else{
				if(a[l]<a[r]){
					a[r]-=a[l];
					l++;
				}
				else{
					a[l]-=a[r];
					r--;
				}
			}
		}
		else{
			if(a[l]==a[r]){
				ans+=a[r],l++,r--;
			}
			else{
				if(a[l]<a[r]){
					a[r]-=a[l];
					ans+=a[l];
					l++;
				}
				else{
					a[l]-=a[r];
					ans+=a[r];
					r--;
				}
			}
		}
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
