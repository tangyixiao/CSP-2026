#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m,er[35],s[35];
struct an{
	int x;
	int w[35],ans,gao;
}a[N]; 
bool cmp(an q,an p){
	if(q.ans==p.ans){
		if(q.gao==p.gao){
			return q.x>p.x;
		}
		return q.gao>p.gao;
	}
	return q.ans>p.ans;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	er[0]=1;
	for(int i=1;i<=30;i++){//√
		er[i]=er[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		int t=a[i].x;
		int j=30;
		while(t){//√
			if(t-er[j]>=0){
				a[i].gao=max(a[i].gao,er[j]);
				a[i].ans++;
				a[i].w[j]=1; 
				t-=er[j];
			}
			j--;
		}
	}
	sort(a+1,a+n+1,cmp); 
	for(int i=1;i<=m;i++){
		for(int j=0;j<=30;j++){
			if(s[j]==2) s[j]=1;
			if(a[i].w[j]){
				s[j]++;
			} 
		}
	}
	int sum=0;
	for(int i=0;i<=30;i++){
		if(s[i]==2){
			sum+=er[i];
		}
	}
	cout<<sum;
	
	
	return 0; 
} 
//90?????
/*
????咋考试的时候有人在楼下弹《妄想感伤代偿联盟》???
孩子的思路是错的好难受	
哎对了？
这个特殊B咋没过但是样例5过了呢？
赌一把只是过不了特性B												
12			1	1															
7	1	1	1														
31	1	1	1	1	1														
1	1																
15	1	1	1	1

												
3	1	1
43	1	1		1		1												
65	1						1											
21	1		1		1											
56				1	1	1							
4			1							
13	1		1	1																	
	1	2	4	8	16	32	64	128	256	521	1024	2048
	
	
	13 4 56 21 3 43 65
	
/1 输入一个转化一个？ 

4 2
3 15 12 12

*/