    #include<bits/stdc++.h>
using namespace std;

int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s1 [2];
	string s2 [2];
	cin >> s1[0]>>s1[1];
	cin >> s2[0]>>s2[1];
	bool chexiang =false;
	bool paishu =false;
	bool ce = false;
	bool xianglin =false;
	if (s1[0]==s2[0]) chexiang =true;
	
	
	string pai[2];
	pai[0]+=s1[1][0];
	pai[0]+=s1[1][1];
	pai[1]+=s2[1][0];
	pai[1]+=s2[1][1];
    if(pai[0]==pai[1] &&chexiang==true) paishu = true  ; 
	
	
	
	char ceshu [2];
	ceshu[0]=s1[1][2];
	ceshu[1]=s2[1][2];

	
	if (((ceshu[0]<='C' &&ceshu[1]<='C')||(ceshu[0]>='D'&&ceshu[1]>='D') ) &&paishu == true )
	{
		
		ce=true;
	}
	
	
 
   
	
	
	
	if (ce == true && ((ceshu[0]-ceshu[1]==1)||(ceshu[1]-ceshu[0]==1))){
		xianglin = true;
	}
	if (chexiang == true) cout << 1;
	else{cout<<0;
	}
	if (paishu == true )cout <<1;
	else{cout<<0;
	
	}
	if(ce == true )cout <<1;
	else {cout<<0;
	}
	if(xianglin == true) cout << 1;else {
		cout <<0;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

