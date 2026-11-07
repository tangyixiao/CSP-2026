#include<bits/stdc++.h>
using namespace std;
#define int long long
string c,s,cc,ss;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c>>s>>cc>>ss;
	if(c==cc)
	{
		cout<<"1";
		if(s[0]==ss[0]&&s[1]==ss[1])
		{
			cout<<"1";
			if((s[2]<='C'&&ss[2]<='C')||(s[2]>'C'&&ss[2]>'C')) 
			{
				cout<<"1";
				if(abs(s[2]-ss[2])==1) cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
/*
mian 

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=55;
mt19937 rnd(time(0));
int n=20;
int x=1,y=1;
int cnt=0;
char c[N][N];
char a[N][N];
int lx,ly;
void check()
{
	a[x][y]=c[x][y];
	if(a[x][y]=='#')
	{
		x=lx,y=ly;
	}
	if(c[x][y]=='T')
	{
		cout<<"Well done！You got 1 points！\n";
	}
	if(c[x][y]=='D')
	{
		cout<<"Dead！\n";
		cout<<"back to last address?(0/1) \n >>>";
		char flag;cin>>flag;
		if(flag=='1')
		{
			x=lx,y=ly;
		}
		else x=1,y=1;
		cout<<"Let's again！\n"; 
	}
	if(c[x][y]=='E')
	{
		cout<<"Find exit\n";
		cout<<"You have get"<<cnt<<"points！\n";
	}
}
signed main()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]='?';
			if(rnd()%17==0)c[i][j]='T';
			else if(rnd()%17==0)c[i][j]='D';
			else if(rnd()%3)c[i][j]='.';
			else c[i][j]='#';
		}
	}
	a[1][1]='S';
	c[1][1]='S';
	c[rnd()%n+1][rnd()%n+1]='E';
	while(1)
	{
		for(int j=1;j<=n;j++)
		{
			for(int i=1;i<=n;i++)
			{
				if(i==x&&j==y)cout<<"A";
				else cout<<a[i][j];
			}
			cout<<"\n";
		}
		cout<<"Now you at ("<<x<<","<<y<<")\n";
		cout<<">>>：";
		string op;cin>>op;
		lx=x,ly=y;
		cout<<"\n"; 
		if(op=="tp")
		{
			int xx,yy;
			cout<<"where >>>";
			cin>>xx>>yy;
			if(xx<1||yy<1||xx>n||yy>n)cout<<"unable \n";
			else if(a[xx][yy]=='?')cout<<"You dont discover here!\n";
			else 
			{
				cout<<"success!\n";
				x=xx;
				y=yy;
			}
		}
		else if(op=="a")
		{
			if(x==1)
			{
				cout<<"unaccepted！";
			}
			else
			{
				x--;
				check();
			}
		}
		else if(op=="w")
		{
			if(y==1)
			{
				cout<<"unaccepted！";
			}
			else
			{
				y--;
				check();
			}
		}
		else if(op=="s")
		{
			if(y==n)
			{
				cout<<"unaccepted！";
			}
			else
			{
				y++;
				check();
			}
		}
		else if(op=="d")
		{
			if(x==n)
			{
				cout<<"unaccepted！";
			}
			else
			{
				x++;
				check();
			}
		} 
		else
		{
			cout<<"unable！\n";
		}
	}
	
	return 0;
}

*/