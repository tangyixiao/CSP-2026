#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,ans;
string s;
long long a[100000],cnt[100000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans=0;
		for(int j=i;j<=n;j++){
			ans++;
			s+=a[j];
			int q=0;
			while(q<s.size()){
				if(s[q]-'0'==a[j]){
					for(int w=q;w<ans-1;w++){
						s[w]='0';
					}
					break;
				}
				q++;
			}
		}
		for(int j=0;j<s.size();j++){
			if(s[j]!='0'){
				cnt[s[j]-'0']++;
			}
		}
		for(int h=0;h<=s.size();h++){
			s[h]='0';
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;	
}