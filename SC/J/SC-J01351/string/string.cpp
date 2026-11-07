#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+100;
vector<int>a;
vector<char>c;
//int a[N],c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int aa;
		char cc;
		cin>>aa>>cc;
		if(c.size()!=0&&c[c.size()-1]==cc)a[a.size()-1]+=aa;
		else{
			c.push_back(cc);
			a.push_back(aa);
		}
	}
	int len=a.size()-1;
//	for(int i=0;i<=len;i++){
//		cout<<c[i]<<":"<<a[i]<<"\n";
//	}
	int l=0,r=len,ans=0;
	int samel=0;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]>=a[r]){
				samel+=a[r];
				a[l]-=a[r];
				r--;
			}
			else{
				samel+=a[l];
				a[r]-=a[l];
				l++;
			}
		}
		else{
			if(a[l]>=a[r]){
				ans+=a[r];
				samel+=a[r];
				a[l]-=a[r];
				r--;
			}
			else{
				ans+=a[l];
				samel+=a[l];
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b