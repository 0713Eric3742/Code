#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c[50][50],tx,ty,cnt=0;
	int f[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
	cin>>a>>b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			cin>>c[i][j];
		}
	}
	tx=a/2+1,ty=a/2+1;
	b--;
	cout<<c[tx][ty];
	while(1<=tx&&tx<=a&&1<=ty&&ty<=a)
	{
		cnt++;
		for (int i = 0; i < 2; i++)
		{
			b++;
			if(b==4) b=0;
			for (int j = 0; j < cnt; j++)
			{
				if(1<=tx&&tx<=a&&1<=ty&&ty<=a)
				{
					tx+=f[b][0];
					ty+=f[b][1];
					//cout<<tx<<' '<<ty<<' '<<b<<endl;
				}
				if(1<=tx&&tx<=a&&1<=ty&&ty<=a) cout<<c[tx][ty];
			}
		}
	}
	return 0;
}