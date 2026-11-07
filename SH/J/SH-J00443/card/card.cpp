#include <bits/stdc++.h>
using namespace std;

int cnt[300005] = {0},arr[500005] = {0},tmp[300005] = {0};
int main(){
	freopen("card2.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	
	for(int i = 1;i <= n;i++)	cin >> arr[i];
	
	stack<int> st;
	
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			if(tmp[arr[j]] == 0)	st.push(arr[j]),tmp[arr[j]] = 1;
			else{
				while(tmp[arr[j]] != 0){
					int num = st.top();
					st.pop();
					
					tmp[num] = 0;
				}
								
				st.push(arr[j]);
				tmp[arr[j]] = 1;
			}
		}
		
		while(!st.empty()){
			int num = st.top();
			st.pop();
					
			tmp[num] = 0;
			cnt[num]++;
		}
	}
	
	for(int i = 1;i <= m;i++){
		cout << cnt[i];
		cout << " ";
	}	
	return 0;
}
