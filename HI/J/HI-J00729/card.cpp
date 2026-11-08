#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	string s;
	string a;
	for(int i=1;i<=n;i++){
		cin>>a;
	}
	int kk=1;
	long long cnt[30005];
	for(int i=1;i<=n;i++){
		for(int k=i;k<=n;k++){
			for(int j=1;j<=i;j++){
				if(s[i]==a[i]){
					s.erase(j,i);
					break;
				}
			}
			s[i]=a[i];
		}
		for(int j=1;j<=s.size();j++){
			cnt[kk]=s[i];
			kk++;
		}
	}
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<=kk;j++){
			if(cnt[j]==i){
				sum++;
			}
		}
		cout<<sum<<" ";
	}
	return 0;
}
