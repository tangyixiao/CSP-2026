#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>

int n;
int a[200005];
int m;
int c[40][200005];
struct node{
	int p;//1的个数
	vector<int> id; 
}P[200005];

bool cmp(const PII &A, const PII &B){
	return A.first<B.first;	
}

bool cmp2(const int &p, const int &q){
	return a[p]>a[q];
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	if (m==1){
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans, a[i]);
		} 
		printf("%d\n", ans);
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;j++){
			if ((a[i]>>j)&1){
				c[j][i]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;j++){
			if (c[j][i]==1){
				P[j].p++;
				P[j].id.push_back(i);
			}
		}
	}
	vector<int> ansid;
	int shangx=0;
	for(int j=30;j>=0;j--){
		if (P[j].p<m){
			continue;
		}
		ansid=P[j].id;
		shangx=j;
		break;
	}

	for(int x : ansid){
		//printf("%d\n", x);
	}
	vector<PII> last0;
	int l=ansid.size();
	for(int i=0;i<l;i++){
		int y=a[ansid[i]];
		bool ok=true;
		for(int j=shangx;j>=0;j--){
			if (!((y>>j)&1)){
				last0.push_back(make_pair(j, ansid[i]));
				ok=false;
				break; 
			}
		}
		if (ok){
			last0.push_back(make_pair(-1, ansid[i]));
		}
	}
	if (last0.empty()){
		//全是2^k且m>=2
		printf("0");
		return 0; 
	}
	stable_sort(last0.begin(), last0.end(), cmp);
	vector<int> anssss;
	for(PII y : last0){
		anssss.push_back(y.second);
	}
	stable_sort(anssss.begin(), anssss.end(), cmp2);
	int ans=anssss[0];
	ans=a[ans];
	for(int i=1;i<m;i++){
		ans&=a[anssss[i]];
	}
	printf("%d\n", ans);
} 