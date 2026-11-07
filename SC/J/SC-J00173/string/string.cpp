#include <bits/stdc++.h>
#include <string>
using namespace std;

struct qwe{
	int q;
	char w;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	qwe p[100001];
	int ans = 0;
	for (int i = 1;i <= n;i++){
		cin >> p[i].q >> p[i].w;
		ans += p[i].q;
	}
	int ans1 = ans/2;
	char qwer[ans];
	char qwer1[ans1],qwer2[ans1];
	int a = 0;
	for (int i = 1,z = 1;i <= ans;i++){
		for (int j = z;j <= p[i].q;j++,z++){
			qwer[j] = p[j].w;
		}
	}                                                                                   
	for (int i = 1;i <= ans1;i++){
		qwer1[i] = qwer[i];		
	}
	for (int i = ans;i >= ans1;i--){
		qwer2[i] = qwer[i];		
	}
	for (int i = 0;i <= ans;i++){
		if (qwer1[i] != qwer2[i]){
			a++;
		}
	}    
	cout << a;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 