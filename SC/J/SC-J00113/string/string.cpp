#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+7;
char b[N];
int a[N];
ll ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1,j=n;i<j;){
		if(a[i]>a[j]){
			a[i]-=a[j];
			if(b[i]!=b[j]){
				ans+=a[j];
			}
			j--;
			
		}else if(a[i]==a[j]){
			if(b[i]!=b[j])ans+=a[i];
			i++,j--;
		}else if(a[i]<a[j]){
			a[j]-=a[i];
			if(b[i]!=b[j]){
				ans+=a[i];
			}
			i++;
		}
		
	}
	cout<<ans<<endl;
	return 0;
}