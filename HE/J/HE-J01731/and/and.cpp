#include<bits/stdc++.h>
using namespace std;
	int n;
	int m;

int max_n =0;




int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;


	vector <int> v(n+1);
	
    for (int i=1; i<=n;i++){
    	cin >>v[i];
	}

	
	if(m==2){
	for (int i=1; i<v.size();i++){
     for (int j=i+1; j<=v.size();j++){
    	cout << (v[i] and v[j])<<'\n';
    	
    //	max_n=max(max_n,p);
    	
	}
	}
    
	cout << max_n;
	}

	
//	cin >> n>> p;
//	cout<<n and p;
	
   
	
	
	
	
	
	
	
}
