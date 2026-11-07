#include<bits\stdc++.h>
using namespace std;

	
	

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	int a[101],p,b=0,h=n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		p=a[i];
		h=n-i;
		
		for(int j=i;j<h;j++){
	
			for(int k=1;k<m;k++){
				p&=a[i+k+j];
				h--;
						
			}
			
			
			if(p>b){
				b=p;
				
			}
		}
		
		}
	
	cout << b;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
