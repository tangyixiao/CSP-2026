#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int cnt_js(int v){
	int c = 0;
	while(v){
		if(v%2 == 1){ //存储二进制下1的个数 
			c++;
		}
		v/=2;
	}
	return c;
}

struct node{
	int value; //原本的值 
	int cnt; //二进制下1的个数 
};

node a[N];

bool cmp(node x,node y){
	if(x.cnt == y.cnt){
		return x.value > y.value;
	}
	return x.cnt>y.cnt; //按 1的个数排序 
}

bool cmp2(node x,node y){
	return x.value>y.value; //按原数的大小排序 
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i].value;
		a[i].cnt = cnt_js(a[i].value); //计算二进制下1的个数 
	}
	
	if(m == 1){ //1个测试点 (5分) 
		int Max = 0;
		for(int i = 1;i<=n;i++){
			Max = max(Max,a[i].value);
		}
		cout<<Max;
		return 0;
	}
	
	if(m == n){ //1个测试点 (5分) 
		long long ans = a[1].value;
		for(int i = 2;i<=n;i++){
			ans = ans&a[i].value;
		}
		cout<<ans;
		return 0;
	}
	
	sort(a+1,a+1+n,cmp); //情况1,按照1的个数从大到小排序 
	
	long long ans = a[1].value;
	for(int i = 2;i<=m;i++){
		ans = ans&a[i].value; //按位与 
	}
	
	sort(a+1,a+1+n,cmp2); //情况2,按照原本的值的顺序从大到小排序 
	
	long long ans2 = a[1].value;
	for(int i = 2;i<=m;i++){
		ans2 = ans2&a[i].value; //按位与 
	}
	
	cout<<max(ans,ans2);
	return 0;
}
