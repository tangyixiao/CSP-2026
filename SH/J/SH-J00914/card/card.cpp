#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],cnt[300005];
stack <int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			if(b[a[j]] == 1){
				while(st.top() != a[j]){
					b[st.top()]--;
					st.pop();
				}
			}
			else{
				st.push(a[j]);
				b[a[j]]++;
			}
		}
		for(int j = 1;j <= m;j++){
			if(b[j] == 1){
				cnt[j]++;
			}
		}
		memset(b,0,sizeof(b));
	}
	for(int i = 1;i <= m;i++){
		cout << cnt[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
