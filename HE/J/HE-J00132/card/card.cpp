#include<iostream>
using namespace std;
int n,m,a[500001],b[500001],c[300001]={0};
int main(){
	bool mark;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		b[500001]={0};
		for(int j=i;j<n;j++){
			mark=1;
			for(int j2=i;j2<i+j;j2++){
				if(a[j]==b[j2]){
					mark=0;
					for(int j3=j+1;j3<j2;j3++){
						b[j3]=0;
					}
				}
			}
			if(mark){
				b[j]=a[j];
			}
		}
		for(int j=i;j<n;j++){
			c[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout << c[i] << ' ';
	}
	return 0;
}
