#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5; 

long long arr[MAXN];
int n;
long long dfs(int m,int ans,int i){	long long res = 0;
	if(i == n){
		if(m != 0){
			return 0;
		}else{
			return ans;
		}
	} 

	else{
	
	for(int j = i;j <= n;j++){
		res = max(dfs(m-1,ans&arr[j],j),res);
		}
	}
	
	return res;
	
	
} 

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
		ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long ans = 0,q2 = 1;;
	long long m,a;cin >> n >>m;long long q1 = 0;
	long long cot1 = 0,cot2 = 0,cot3 = 0;
	bool flaga = 1,flagb = 1,flagc = 1;;
	for(int i = 1;i <= n;i++){
		cin >>arr[i]; 
		q1 = max(q1,arr[i]);
		q2 = q2&arr[i];
		if(arr[i] != i-1){
			flagb = 0;
		} 
		if(arr[i] >= 4){
			flagc = 0;
		}
		if(arr[i] <= 3){
			if(arr[i] == 1){
				cot1++;
			}else if(arr[i] == 2){
				cot2++;
			}else if(arr[i] == 3){
				cot3++;
			 } 
		}
		
		
	}
	
	if(m == 1){
		cout << q1;return 0;
	}else if(m == n){
		cout << q2;
	}
	
	else if(flagb){
		
		long long res = arr[n];
		for(int i = n-1,j = m-1;i >= 1&&j>=1;i--,j--){
			res = res&arr[i];
		}
		cout <<res;
		return 0; 
	}
	else if(flagc == 1){
		if(cot3 >= m){
			cout << 3;
		}else if(cot3+cot2 >= m){
			cout << 2;
		}else if(cot3+cot1 >= m ||cot2+cot1 >= m){
			cout << 1;
		}else {
			cout << 0;
		} 
		return 0;
		
	}else if(flaga == 1){
		sort(arr+1,arr+1+n);
		long long res = arr[n];
		for(int i = n-1,j = m-1;i >= 1&&j>=1;i--,j--){
			res = res&arr[i];
		}
		cout <<res;
		return 0; 
		
	}
	
	
	else if(n <= 20){

		long long res = 0;
		for(long long i = 1;i <= n;i++){
			res = max(dfs(m-1,arr[i],i),res);
			
		}
		cout <<res;
		 return 0;
	}
	
	 
	
		return 0; 
	}

