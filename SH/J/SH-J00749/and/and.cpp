#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int a[200200];
int ans;
void dfs(int pos,int len,int num) {
	if(pos == n+1) {
		if(len==k&&num!=-1) ans = max(ans,num);
		return;
	}
	dfs(pos+1,len+1,(num==-1?a[pos]:num&a[pos]));
	dfs(pos+1,len,num);
}
void SP1() {
	dfs(1,0,-1);
	cout << ans << endl;
}
void SP2() {
	cout << *max_element(a+1,a+n+1) << endl;
}
void SP3() {
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= n;j++) {
			if(i!=j) ans = max(ans,a[i]&a[j]);
		}
	}
	cout << ans << endl;
}
void SP4() {
	ans = a[1];
	for(int i = 2;i <= n;i++) ans &= a[i];
	cout << ans << endl;
}
int pre[200200],aff[200200];
void SP5() {
	pre[1]=a[1];
	for(int i = 2;i <= n;i++) pre[i]=pre[i-1]&a[i];
	aff[n]=a[n];
	for(int i = n-1;i >= 1;i--) aff[i]=aff[i+1]&a[i];
	ans = max(pre[n-1],aff[2]);
	for(int i = 2;i < n;i++) ans = max(ans,pre[i-1]&aff[i+1]);
	cout << ans << endl;
}
int F[30];
bool judgeA() {
	for(int i = 1;i <= n;i++) {
		int flag = 0;
		for(int j = 1;j <= 30;j++) {
			if(a[i]==F[j]-1) {
				flag=1;
				break;
			}
		}
		if(!flag) return false;
	}
	return true;
}
void SP6() {
	sort(a+1,a+n+1);
	ans = a[n];
	int i = n,cnt = k;
	while(cnt>0) {
		ans &= a[i];
		i--;
		cnt--;
	}
	cout << ans << endl;
}
bool judgeB() {
	int flag=0;
	for(int i = 1;i <= 30;i++) {
		if(n==F[i]) {
			flag=1;
			break;
		}
	}
	if(!flag) return false;
	for(int i = 1;i <= n;i++) {
		if(a[i] != i-1) return false;
	}
	return true;
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	F[0]=1;
	for(int i = 1;i <= 30;i++) F[i]=F[i-1]*2;
	cin >> n >> k;
	for(int i = 1;i <= n;i++) cin >> a[i];
	if(n<=20) SP1();
	else if(k==1) SP2();
	else if(k==2) SP3();
	else if(k==n) SP4();
	else if(k==n-1) SP5();
	else if(judgeA()) SP6();
	else if(judgeB()) SP6();
	else {
		cout << "²ÉÉ£×Ó¡¤´ºÈçÃÎ" << endl;
		cout << "´ºÀ´´ºÈ¥´ºÈçÃÎ£¬ÁøÉ«Ê¼Çà£¬»¨Ó°³õºì¡£²ÊµûË«Ë«ÂÒ²ÝÖÐ¡£" << endl;
		cout << "ÇäÀ´ÇäÈ¥ÇäÎÞ×Ù£¬ËªÂúÊèÍ©£¬ÄñÈ¥³²¿Õ¡£²ÐÔÂÒÀÒÀ¹ÒÀäËÉ¡£" << endl; 
	}
	return 0;
}
