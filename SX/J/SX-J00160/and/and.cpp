#include <bits/stdc++.h>
using namespace std;

struct data{
	long long num_of_one;
	long long num;
};

long long suan(long long c){
	long long cnt=0;
	while(c>0){
		int yu=c%2;
		if(yu==1){
			cnt++;
		}
		c/=2;
	}
	return cnt;
}

bool cmp(data a,data b){
	if(a.num_of_one!=b.num_of_one){
		return a.num_of_one> b.num_of_one;
	}
	else{
		return a.num>b.num;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin >> a >> b;
	data base[a];
	for(int i=0;i<a;i++){
		cin >> base[i].num;
	}
	for(int i=0;i<a;i++){
		int now=base[i].num;
		base[i].num_of_one=suan(now);
	}
	sort(base+0,base+a,cmp);
	long long answer=base[0].num;
	for(int i=0;i<b;i++){
		answer=answer & base[i].num;
	}
	cout << answer;
	return 0;
}