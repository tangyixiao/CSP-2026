#include<bits/stdc++.h>
using namespace std;
struct cnt{
	int cn;
	char cc;
};
int n,x,l,r;
cnt a[200005];
unsigned long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//freopen("string6.in","r",stdin);
	//freopen("string6.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].cn>>a[i].cc;
	l=1,r=n;
	while(l<r){
		if(a[l].cc==a[r].cc){
			if(a[l].cn>a[r].cn) a[l].cn-=a[r].cn,r--;
			else if(a[l].cn==a[r].cn)l++,r--;
			else a[r].cn-=a[l].cn,l++;
		}else{
			if(a[l].cn>a[r].cn) ans+=a[r].cn,a[l].cn-=a[r].cn,r--;
			else if(a[l].cn==a[r].cn)ans+=a[r].cn,l++,r--;
			else ans+=a[l].cn,a[r].cn-=a[l].cn,l++;
		}
	}
	cout<<ans;
	return 0;
} 
