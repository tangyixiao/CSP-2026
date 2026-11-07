#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
//I AK csp-j
long long n;

struct node{
	long long shuliang;
	char c;
} a[N];

void solve1(){
	string s = "";
	for(int i = 1;i <= n;i++){
		cin >> a[i].shuliang >> a[i].c;
		for(int j = 1;j <= a[i].shuliang;j++){
			s+=a[i].c;
		} 
	}
	long long cnt = 0;
	int i = 0,j = s.size() - 1;
	while(true){
		if(i > j){
			break;
		}
		if(s[i] != s[j]){
			cnt++;
		}
		i++;
		j--;
	}
	cout << cnt;
}
void solve2(){
	for(int i = 1;i <= n;i++){
		cin >> a[i].shuliang >> a[i].c;
	}
	long long cnt = 0;
	long long i = 1;
	long long j = n;
	while(true){
		if(i > j){
			break;
		}
		if(a[i].shuliang == 0){
			i++;
		}
		if(a[j].shuliang == 0){
			j--;			
		}
		if(a[i].shuliang > a[j].shuliang){
			if(a[i].c != a[j].c){
				cnt += a[j].shuliang;
			}
			a[i].shuliang -= a[j].shuliang;
			a[j].shuliang = 0;
			j--;
//			continue;
		}
		if(a[i].shuliang == a[j].shuliang){
			if(a[i].c != a[j].c){
				cnt+=a[i].shuliang;
			}
			a[i].shuliang = 0;
			a[j].shuliang = 0;
			i++;
			j--;
//			continue;
		}
		if(a[i].shuliang < a[j].shuliang){
			if(a[i].c != a[j].c){
				cnt+= a[i].shuliang;
			}
			a[j].shuliang -= a[i].shuliang;
			a[i].shuliang = 0;
			i++;
//			continue;
		}
	} 
	cout << cnt;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if(n <= 10){
		solve1();
	}else{
		solve2();
	}
	return 0; 
}
