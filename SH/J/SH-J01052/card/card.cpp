#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 666;
int a[N];
int t[N];
int sum[N];
int n,m;
void cardy(int id){
	stack<int>st;
	for(int i = id;i <= n;i++){
		if(t[a[i]] == 1){
			while(st.top() != a[i]){
				int f = st.top();
				st.pop();
				t[f]=0;
			}
		}else{
			t[a[i]] = 1;
			st.push(a[i]);
		} 
		
	}
	for(int i = 1;i <= m;i++){
		sum[i] += t[i];
		t[i] = 0;
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	cin >> n >> m;
	for(int i = 1;i <= n;i++)   cin >> a[i];
	
	for(int i = 1;i <= n;i++){
		cardy(i);
	}
	for(int i = 1;i <= m;i++){
		cout << sum[i] << " ";
	}
	return 0;
} 
