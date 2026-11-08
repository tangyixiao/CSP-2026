#include <bits/stdc++.h>
using namespace std;


int n,m;
int a[5400040];
int res[60000];
bool f[1000005];
vector<int>st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >>m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i=1;i <= n;i++){
		st.clear();
		memset(f,0,sizeof f);
		for(int j=1;j <= n;j++){
			if(!f[a[j]]){
				st.push_back(a[j]);
				f[a[j]] = 1;
			}
			else{
				while(st[st.size()]-1!=a[j]){
					f[st.size()-1] = 0;
					st.pop_back();
				}
			}
		}
		while(st.size()){
			res[st[st.size()-1]]++;
			st.pop_back();
		}
	}
	for(int i = 1;i <= m;i++){
		cout << int(res[i]) << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
