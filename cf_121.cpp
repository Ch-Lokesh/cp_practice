#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long


int32_t main()
{
	
	int t;
	cin >> t;
	while (t--)
	{
		int n, A, B;
		cin >> n >> A >> B;
		int sc_1 = 0;
		int sc_2 = 0;
		for (int i = 0; i < n; i++)
		{
			string str;
			cin >> str;
			if ((str[0] == 'E') || (str[0] == 'Q') || (str[0] == 'U') || (str[0] == 'I') || (str[0] == 'N') || (str[0] == 'O') || (str[0] == 'X'))
			{
				sc_1 += A;
			}
			else
			{
				sc_2 += B;
			}
		}
		if (sc_1 > sc_2)
		{
			cout << "SARTHAK" << "\n";
		}
		if (sc_1 < sc_2)
		{
			cout << "ANURADHA" << "\n";
		}
		if (sc_1 == sc_2)
		{
			cout << "DRAW" << "\n";
		}

	}
}