#include <bits/stdc++.h>
using namespace std;
int main (){
	int m,n;
	cin >> m >> n;
	int b[m];
	for (int i=0;i<m-1;i++){
		cin >> b[i];
	}
	int c[100005];
	int a=0;
	for (int i=0;i<m-1;i++){
		for(int j=0;j<m-1;j++){
			a=b[i]*b[j];
		}
	}
	int q=0;
	int len=0;
	while(c[t]>0){
		q++;
		len++;
	}
	int max=0;
	for (int i=0;i<c.length;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	cout << max << endl;
	return 0;
}
	
