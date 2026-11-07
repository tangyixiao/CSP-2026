#include<bits/stdc++.h>
using namespace std;
int a[500010];
int c[300010];
int f[300010]; 
stack<int> st;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int k = 1; k <= n; k++){
		for(int i = k; i <= n; i++){
			if(f[a[i]]){
				//cout << "oh my cat\n";
				while(st.top() != a[i]){
					if(c[st.top()] > 0){
						c[st.top()]--;
						f[st.top()]--;
					}
					//cout << st.top() << "\n";
					st.pop();
				}
			}else{
				//cout << "oh my pig\n";
				//cout << c[a[i]] << " " << f[a[i]] << "\n";
				c[a[i]]++;
				f[a[i]]++;
				//cout << c[a[i]] << " " << f[a[i]] << "\n";
				st.push(a[i]);
			}
		}
		memset(f, 0, sizeof(f));
		while(!st.empty()){
			st.pop();
		}
	}
	for(int i = 1; i <= m; i++){
		cout << c[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
