#include <bits/stdc++.h>
using namespace std;
long long a[200050];
string s[200050];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i = 1;i<=n;i++){
		cin>>a[i];
		int ai = a[i];
		string ss = "";
		while (ai != 0){
			ss+=ai%2+'0';
			ai/=2;
		}
		for (int j = ss.size()-1;j>=0;j--){
			
			s[i]+=ss[j];
		}
		cout<<s[i]<<" "<<ss<<endl;
	}
	
	int mx = -1e9;
	for (int i = 1;i<=n;i++){
		for (int j = i+1;j<=n;j++){
			int num = 0;
			int ans = 0;
			//cout<<s[i]<<" "<<s[j];
			for (int ii = min(s[i].size(),s[j].size())-1;ii>=0;ii--){
				for (int jj = min(s[i].size(),s[j].size())-1;jj>=0;jj--){
					if (s[i][ii] == s[j][jj]){
						//cout<<s[i][ii]<<" "<<s[j][jj]<<endl;
						if (num == 0){
							++ans;
						}else{
							ans = 1;
							int yum = num;
							while (yum > 0){
								ans*=2;
								yum--;
							}
							cout<<yum<<" ";
						}
					}
					cout<<ans<<" "; 
					
				}
				cout<<endl;
				
				mx = max(mx,ans);
				
			}
			num++;
		}
	}
	cout<<mx;
}
