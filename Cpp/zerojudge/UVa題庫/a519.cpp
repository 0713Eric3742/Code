//        db         .g888bgd  
//       ;MM:      .dP'     `M 
//      ,V^MM.     dM'       ` 
//     ,M  `MM     MM          
//     AcreateA    BY.         
//    A'     VML  ` Mb.     ,' 
//  .AMA.   .ERIC.   `^bmmmd'  
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a, ans[85] = {};
	ans[0] = 1;
	ans[1] = 1;
	for (int i = 2; i <= 80; i++)
	{
		ans[i] = ans[i-1] + ans[i-2];
	}
	while (cin >> a && a != 0)
	{
		cout << ans[a] << endl;
	}
	return 0;
}