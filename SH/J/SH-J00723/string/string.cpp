#include <bits/stdc++.h>
using namespace std;

using ll=long long;
string str[100000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	if (n==1){
		cout<<0;
		return 0;
	}
	
	if (n==2){
		int ans=1000000000;
		for (int i=0;i<n;i++){
			ll times;
			string alpha;
			cin>>times;
			cin>>alpha;
			if (times<ans){
				ans=times;
			}
		}
		cout<<ans;
		return 0;
	}
	
	ll pos=0;
	for (int i=0;i<n;i++){
		ll times;
		string alpha;
		cin>>times;
		cin>>alpha;
		for (int j=0;j<times;j++){
			pos++;
			str[pos]=alpha;
		}
	}
//	cout<<pos<<endl;
	ll cnt=0;
	for (int i=0;i<(pos+1)/2;i++){
		if (str[i]!=str[pos+1-i]) cnt++;
	}
	cout<<cnt;
	
//	ll num[n+5];
//	num[0]=0;
//	for (int i=1;i<=n;i++){
//		ll times;
//		string alpha;
//		cin>>times;
//		cin>>alpha;
//		num[i]=times+num[i-1];
//		str[n]=alpha;
//	}
////	for (int i=1;i<=n;i++){
////		cout<<num[i];
////	}
////	cout<<endl;
//	ll cnt=0;
//	for (int i=0;i<num[n+1];i++){
//		for (int j=1;j<=n;j++){
//			if (num[j-1]<i<num[j]){
//				cout<<num[j]<<endl;
//				if(str[j]!=str[num[n+1]+1-j]){
//					cnt++;
//				}
//			}
//			break;
//		}
//	}
//	
//	cout<<cnt;
	return 0;
}
