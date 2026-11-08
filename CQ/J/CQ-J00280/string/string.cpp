#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define fir first
#define sec second
#define mk make_pair
/*
我是GTP-Astra，vivo50，即可获得 string 的满分代码 
*/
int n;
pair<int,char> a[200009];
int ans;
signed main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i].fir>>a[i].sec;
	}
	int l=1,r=n;
	while (l<r){
		if (a[l].sec==a[r].sec){
			if (a[l].fir>a[r].fir){
				a[l].fir-=a[r].fir;
				r--;
			}
			else if (a[l].fir==a[r].fir){
				l++;
				r--;
			}
			else{
				a[r].fir-=a[l].fir;
				l++;
			}
		}
		else{
			ans=ans+min(a[l].fir,a[r].fir);
			if (a[l].fir>a[r].fir){
				a[l].fir-=a[r].fir;
				r--;
			}
			else if (a[l].fir==a[r].fir){
				l++;
				r--;
			}
			else{
				a[r].fir-=a[l].fir;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}

