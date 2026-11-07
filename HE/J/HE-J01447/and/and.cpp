#include<bits/stdc++.h>

using namespace std;

const int n_max=2e5;

int n,m;
unsigned int num[3*n_max+5];
unsigned int and_sum;//给7用
unsigned int maxn;//给6用 
bool test_14_15;//给14,15用 

int no1(int a){//统计二进制1的个数 
	int ans=0;
	while(a>0){
		ans+=(a%2);
		a>>=1;
	}
	return ans;
}

bool cmp(int a,int b){
	int noa,nob;
	noa=no1(a);nob=no1(b);
	if(noa==nob) return a>=b;//相同的1,数值越大越靠前 
	return noa>nob;
}

int main(){
	//注释！！！！！！！！！！！！！！！！！！！！！！！
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	cin>>num[0];
	and_sum=maxn=num[0];
	
	test_14_15=(num[0]==0);
	
	for(int i=1;i<n;i++){
		cin>>num[i];
		maxn=max(maxn,num[i]);
		if(num[i]-num[i-1]!=1){
			test_14_15=false;
		}
		and_sum=(and_sum&num[i]);
	}
	
	if(m==1){//#6
		cout<<maxn;
		return 0; 
	}
	
	if(m==n){//#7 
		cout<<and_sum;
		return 0;
	}
	
	if(m==2){//#8~#10
		int and_maxn=0;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				and_maxn=max(and_maxn,int(num[i]&num[j]));
			}
		}
		cout<<and_maxn;
		return 0;
	}
	
	stable_sort(num,num+n,cmp);
	unsigned int final_ans=num[0];
	for(int i=1;i<m;i++){
		final_ans&=num[i];
	}
	cout<<final_ans;
	
	return 0;
} 
