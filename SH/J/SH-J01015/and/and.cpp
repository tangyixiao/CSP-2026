#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200009],cntt=-998,answer;
string s[2000009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		long long cnt=0;
		while(a[i]>0){
			s[i][cnt]=char(48+a[i]%2);
			a[i]/=2;
			cnt++;
		}
		cntt=max(cntt,cnt);
	}	
	for(int i=cntt;i>=0;i--){
		int ans=0;
		for(int j=0;j<n;j++){
			if(s[j][i]=='1'){
				ans++;
			}	
		}
		if(ans>=m){
			answer+=pow(2,i);
			for(int j=0;j<n;j++){
				if(s[j][i]!='1'){
					for(int k=0;k<=cntt;k++)	s[j][k]='0';
				}
			}
		}	
	}
	cout<<answer;
	return 0;
}
