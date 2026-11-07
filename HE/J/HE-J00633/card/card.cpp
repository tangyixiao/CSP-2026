#include<bits/stdc++.h>
using namespace std;

long long n,m;
stack<long long> s;
long long a[5555555];
long long z[5555555]={0};

void init(){
	cin>>n>>m;
	long long i;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
}

void qyj(){
	long long ii;
	for(ii=1;ii<=n;ii++){
		long long i;
		long long v[5555555]={0};
		for(i=ii;i<=n;i++){
			v[a[i]]++;
			if(v[a[i]] == 2){
				while(s.top() != a[i]){
					v[s.top()]--;
					s.pop();
				}
				v[a[i]]--;
			}else{
				s.push(a[i]);
			}
		}
		for(i=1;i<=m;i++){
			if(v[i]!=0){
				z[i]++;
			}
		}
	}
	long long k;
	for(k=1;k<=m;k++){
		cout<<z[k]<<" ";
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	init();
	qyj();
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 
