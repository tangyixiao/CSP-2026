#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n;
int a[N];
char c[N];
int fr=1,la;//front last
int ans;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	la=n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
	}
	while(fr<la) {
		//cout<<"当前这轮fr="<<fr<<",la="<<la<<endl;
		if(c[fr]==c[la]) {
		//	cout<<"c["<<fr<<"]("<<c[fr]<<")"<<"==c["<<la<<"]("<<c[la]<<")"<<endl;
			if(a[fr]>a[la]) {
				a[fr]-=a[la];
				la--;
			} else if(a[fr]<a[la]) {
				a[la]-=a[fr];
				fr++;
			}else{
				la--;
				fr++;
			}
		}else{
			//cout<<"c["<<fr<<"]("<<c[fr]<<")"<<"!=c["<<la<<"]("<<c[la]<<")"<<endl;
		//	cout<<"ans from "<<ans<<" to ";
			if(a[fr]>a[la]) {
				ans+=a[la];
				a[fr]-=a[la];
				la--;
			} else if(a[fr]<a[la]) {
				ans+=a[fr];
				a[la]-=a[fr];
				fr++;
			}else{
				ans+=a[la];
				la--;
				fr++;
			}
		//	cout<<ans<<endl;
		}
	}
	cout<<ans;
	return 0;
}