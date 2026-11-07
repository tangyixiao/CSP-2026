#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
int n,m;
int card[N];
int t[N];
int table[N];

int main(){
	freopen('card.in','r',stdin);
	freopen('card.out','w',stdout);
	
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> card[i];
	}
	for(int i = 1 ; i <= n ; i++){
		int cnt = 1;
		for(int a = i ; a <= n ; a++){
			if(a==i){
				table[1] = card[a];
			}
			bool if_have = 0;
			for(int j = 1 ; j <= cnt ; j++){
				if(table[j] == card[a]){
					if_have = 1;
					cnt = j;
				}
			}
			if(if_have = 0){
				cnt++;
				table[cnt] = card[a];
			}
		}
		for(int k = 1 ; k <= cnt ; k++){
			t[table[k]]++;
			//cout << table[k] << " ";
		}
		//cout << cnt << endl;
	}
	for(int i = 1 ; i <= m ; i++){
		cout << t[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
