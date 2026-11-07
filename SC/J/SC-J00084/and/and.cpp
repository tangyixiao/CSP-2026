#include<bits/stdc++.h>
using namespace std;
int a[200005];
string s[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int sum=-1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		sum=max(sum,a[i]);
		while(a[i]>=1){
			char k=a[i]%2+'0';
			a[i]/=2;
			s[i]+=k;
		}
	}
	if(m==1){
		cout << sum;
		return 0;
	}
	if(m==n){
		string ans=s[1];
		for(int i=2;i<=n;i++){
			int q=ans.size();
			string s2=s[i];
			int q2=s2.size();
			for(int j=0;j<max(q,q2);j++){
				if(q-j<0){
					continue;
				}
				else if(q2-j<0){
					ans[q-j]='0';
					continue;
				}
				if(ans[q-j]=='0' || s2[q2-j]=='0'){
					ans[q-j]='0';
				}
			}
		}
//		cout << ans;
		long long sum=0;
		for(int i=ans.size()-1;i>=0;i--){
			sum+=int(ans[i]-'0')*pow(2,i);
		}
		cout << sum;
		return 0;
	}
	if(m==n-1){
		int n2=n;
		long long sum2=0;
		while(n2>0){
			if(n2==1){
				string ans=s[2];
				for(int i=3;i<=n;i++){
					int q=ans.size();
					string s2=s[i];
					int q2=s2.size();
					for(int j=0;j<max(q,q2);j++){
						if(q-j<0){
							continue;
						}
						else if(q2-j<0){
							ans[q-j]='0';
							continue;
						}
						if(ans[q-j]=='0' || s2[q2-j]=='0'){
							ans[q-j]='0';
						}
					}
				}
		//		cout << ans;
				long long sum=0;
				for(int i=ans.size()-1;i>=0;i--){
					sum+=int(ans[i]-'0')*pow(2,i);
				}
	//			cout << sum;
				sum2=max(sum,sum2);
			}
			else{
				string ans=s[1];
				for(int i=2;i<=n;i++){
					if(i==n2){
						continue;
					}
					int q=ans.size();
					string s2=s[i];
					int q2=s2.size();
					for(int j=0;j<max(q,q2);j++){
						if(q-j<0){
							continue;
						}
						else if(q2-j<0){
							ans[q-j]='0';
							continue;
						}
						if(ans[q-j]=='0' || s2[q2-j]=='0'){
							ans[q-j]='0';
						}
					}
				}
		//		cout << ans;
				long long sum=0;
				for(int i=ans.size()-1;i>=0;i--){
					sum+=int(ans[i]-'0')*pow(2,i);
				}
	//			cout << sum;
				sum2=max(sum,sum2);
			}
			n2--;
		}
		cout << sum2;
		return 0;
	}
	return 0;
}