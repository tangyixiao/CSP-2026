#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],s,ans,j;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(long long i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
	for(long long i=n;i>m;i--){
		s=a[i];
		j=i-1;
		for(long long k=0;k<m-1;k++){
			s&=a[j];
			j--;
		}
		if(s>=ans){
			ans=s;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
