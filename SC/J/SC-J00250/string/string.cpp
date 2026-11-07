#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m[200005];
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i];
		cin>>c[i];
	}
	long long a=0;
	int l=1,r=n;
	for(int i=1;i<=n/2+1;i++){
		if(c[l]!=c[r]){
			a+=min(m[l],m[r]);
			if(m[l]>m[r]){
				m[l]-=m[r];
				r--;
			}else if(m[l]<m[r]){
				m[r]-=m[l];
				l++;
			}else if(m[l]=m[r]){
				m[l]=0;
				m[r]=0;
				l++;
				r--;
			}
			if(l>=r){
				break;
			}
		}
	}
	cout<<a;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 