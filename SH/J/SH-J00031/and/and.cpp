#include<bits/stdc++.h>
using namespace std;
int n , m;
int a[200005];
int ans = -1;
int cnt[10];

void dfs(int step , int sum , int tot){  //步数 与和 选取总数
	if(tot > m) return ;
	if(step > n){
		if(tot == m) ans = max(ans , sum);
		return ;
	}
	dfs(step + 1 , sum & a[step] , tot + 1);
	dfs(step + 1 , sum , tot);
	
}

int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	
	//n<=20暴力  25pts
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	if(n <= 20){ //O(2^n)? 01dfs
		long long maxn = 1ll * pow(2 , 31) - 1;
		int x = maxn;
		dfs(1 , x , 0);
		cout << ans; 
	}
	//n<=2000 m特殊情况 25pts
	else if(n <= 2000){
		if(m == 1){ //m=1取最大a[i] O(n)
			int maxn = -1;
			for(int i = 1 ; i <= n ; i++) maxn = max(maxn , a[i]);
			cout << maxn;
		}
		else if(m == n){ //m=n时只能取所有a[i] 直接计算即可 O(n) 
			ans = a[1];
			for(int i = 1 ; i <= n ; i++) ans = ans & a[i];
			cout << ans;
		}
		else{//m=2时 枚举ij即可，注意i & j == j & i恒成立 所以j:i->n O(n^2)
			for(int i = 1 ; i <= n ; i++)
				for(int j = i + 1 ; j <= n ; j++)
					ans = max(ans , a[i] & a[j]); 
			cout << ans;
		}
	} 
	//n<=2e5 考虑特殊性质与特殊m
	else{
		int fb = 1 , maxa = -1;
		for(int i = 1 ; i <= n ; i++) {
			if(a[i] != i-1) fb = 0;
			maxa = max(maxa , a[i]);
		}
		//cout <<"fb:" <<fb <<endl; 
		if(m == n - 1){//m=n-1等价于选出一个a[i]不要，O(n^2)枚举会tle，考虑O(n) 
		//枚举不要的i肯定不能优化，考虑优化计算过程
		//貌似想不到怎么优化，先把O(n^2)写出来 
			int now = a[2];
			for(int i = 2 ; i <= n ; i++) now = now & a[i];
			ans = max(ans , now);
			
			for(int i = 2 ; i <= n ; i++){ //枚举不要的a[i] 
				now = a[1];
				for(int j = 1 ; j <= n ; j++)
					if(j != i) now = now & a[j]; //遇到a[i]就跳过 
				ans = max(ans , now);
			}
			cout << ans;
			return 0;
		//期望得分：0（ccf数据能不能水一点） 
		}
		
		else if(m==2){
			for(int i = 1 ; i <= n ; i++)
				for(int j = i + 1 ; j <= n ; j++)
					ans = max(ans , a[i] & a[j]); 
			cout << ans;
			return 0; 
		}
		//maxa<4：a[i]为二进制全小于0b11的数（00,01,10,11）
		//用箱数组记录每个值的个数
		//看看cnt[1] , cnt[2] 有没有大于 m-cnt[3] 的  
		else if(maxa < 4){//O(n)  10pts
			for(int i = 1 ; i <= n ; i++) cnt[a[i]]++;
			int rest = m - cnt[3];
			if(cnt[2] > rest) cout << 2;
			else if(cnt[1] > rest) cout << 1;
			else cout << 0; 
			return 0;
		}
		
		//特殊性质B：a[i]为<=k位2进制的所有数，易想到从后往前算（可以保留最高位）
		else if(fb){//O(n)  10pts
			//cout <<"进入fb"<<endl; 
			ans = a[n];
			for(int i = n ; i >= n-m+1 ; i--) ans = ans & a[i];
			cout << ans;
			return 0;
		} 
		//特殊性质A：a[i]为二进制全为1的数，直接sort从大到小计算即可 
		else{//O(nlogn + n)   5pts
			sort(a + 1 , a + n + 1);
			ans = a[n];
			for(int i = n ; i >= n-m+1 ; i--) ans = ans & a[i];
			cout << ans;
			return 0;
		}
		cout << 0;//不知道能不能骗点分 
	} 
	
	return 0;
	//期望得分：75pts 
}
