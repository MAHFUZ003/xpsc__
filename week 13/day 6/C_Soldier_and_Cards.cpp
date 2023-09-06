#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int n, k1, k2;
	int s1[11], s2[11];
	cin >> n;
	cin >> k1;
	for (int i = 0; i < k1; i++)
	{
		cin >> s1[i];
	}
	cin >> k2;
	for (int i = 0; i < k2; i++)
	{
		cin >> s2[i];
	}
	int n1 = k1, n2 = k2;

	int s = 0;
	while (1==1)
	{
		if (s1[0]>s2[0])
		{
			int t1 = s1[0], t2 = s2[0];
			for (int i = 0; i < n1 - 1; i++)
			{
				s1[i] = s1[i + 1];
			}
			for (int i = 0; i < n2 - 1; i++)
			{
				s2[i] = s2[i + 1];
			}
			n2--;
			s1[n1-1] = t2;
			s1[n1] = t1;
			n1++;
		}
		else
		{
			int t1 = s1[0], t2 = s2[0];
			for (int i = 0; i < n1 - 1; i++)
			{
				s1[i] = s1[i + 1];
			}
			for (int i = 0; i < n2 - 1; i++)
			{
				s2[i] = s2[i + 1];
			}
			n1--;
			s2[n2-1] = t1;
			s2[n2] = t2;
			n2++;
		}
		s++;
		if (n1 == 0) break;
		if (n2 == 0) break;
		if (s > 1999) break;
	}

	if (s < 2000){
		cout << s << " ";
		if (n1 == 0) cout << "2";
		else cout << "1";
	}
	else
	{
		cout << -1;
	}


	//system("pause");
}