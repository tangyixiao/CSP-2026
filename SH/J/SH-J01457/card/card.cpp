#include<bits/stdc++.h>
using namespace std;
const long long a[100000];
const long long zong[100000];
vector <set(b,100000)>;
void delet(int i){
	int k=size.b;
	for(int q=i;q<n;i++){
		b.insert(a[q])
		if(size.(b)!=k+1){
			int k=0;
			for(int p=0;p<i;p++){
				if(b[p]==a[q]){
					k=1;
				}
				if(k==1){
					delete(b[p]);
				}
			}
		}
	}
}

int cha(int shu,int x){
	int sum
	for(int i=x;i<n;i++){
		if(b[i]==shu){
			sum++;
		}
	}
	return sum;
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			b[j]=a[i];
		}
		delet(i);
		for(int w=1;w<=m;w++){
			zong[w-1]+=cha(w,i);
		}
	}
	for(int w=0;w<m;w++){
			cout<<zong[w];
		}
	return 0;
 } 
