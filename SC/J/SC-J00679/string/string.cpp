#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005],m1,m2,ans=0;
char c[200005];
int main(){
	int n;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	m1=1,m2=n;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&c[i]);
		b[i]=a[i];
	}
	while(m1<m2){
		if(c[m1]!=c[m2]){
			ans+=min(a[m1],a[m2]);
			if(a[m1]>a[m2]){
				a[m1]-=a[m2];
				m2--;
			}
			else{
				a[m2]-=a[m1];
				m1++;
			}
		}
		else{
			if(a[m1]>a[m2]){
				a[m1]-=a[m2];
				m2--;
			}
			else{
				a[m2]-=a[m1];
				m1++;
			}
		}
	}
	cout<<ans;
	return 0;
} 