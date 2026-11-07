#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+10;
int a[N];
priority_queue<int>q;

int nn;
int two(int x){
	int n = 1;
	int cnt = 0;
	for (int i = 1;;i++){
		if (x == 0) break;
		cnt += (x % 2) * n;
		n *= 10;
		x = x / 2;
	}
	nn = n;
	return cnt;
}

string rev(string s){
	string s2;
	int j = s.size()-1;
	for (int i = 0;i < s.size();i++){
		s2 += s[j];
		j--;
	}
	return s2;
}

int ad(int x,int y){
	string sx,sy,sxx,syy;
	x = two(x);
	y = two(y);
	
	while (x > 0){
		sx += (x % 10) + '0';
		x = x / 10;
	}
	
	while (y > 0){
		sy += (y % 10) + '0';
		y = y / 10;
	}
	
	sx = rev(sx);
	sy = rev(sy);
	
	
	
	int lenx = sx.size();
	int leny = sy.size();
	int mx = max(lenx,leny);
	
	if (lenx > leny){
		int n = lenx - leny;
		for (int i = 0;i < n;i++) syy[i] = 0;
		syy += sy;
		sy = syy;
	}else{
		int n = leny - lenx;
		for (int i = 0;i < n;i++) sxx[i] = 0;
		sxx += sx;
		sx = sxx;
	}
	
	
	
	string cnt;
	
	for (int i = 0;i < lenx;i++){
		if (sx[i] == sy[i]) cnt += '1';
		else cnt += '0';
	}
	
	int cnt2 = 0;
	int n = 1;
	cnt = rev(cnt);
	for (int i = 0;i < lenx;i++){
		cnt2 += (cnt[i]-48) * n;
		n *= 10;
	}
	
	n = 1;
	int ccnt = 0;
	for (int i = 0;i < lenx;i++){
		int xy = cnt2 % 10;
		cnt2 /= 10;
		ccnt += xy * n;
		n *= 2;
	}
	
	return ccnt;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		int x;
		cin >> x;
		q.push(x);
	}
	
	int x = q.top();
	q.pop();
	int cnt = x;
	
	for (int i = 1;i < m;i++){
		x = q.top();
		q.pop();
		cnt = ad(cnt,x);
	}
	cout << cnt;

	
	
	return 0;
}
