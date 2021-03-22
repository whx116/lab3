	/*#include<iostream>
	#include<cmath>
	#include<iomanip>
	using namespace std;
	#define pi 3.1415926
	int factorial(int x,y) {
		if (fabs(x-y)<0.000001)
			return x;
		else
			return  factorial(2*factorial(y)+);
	}

	int main() {
		int n; double e=0;
		cin >> n;

		return 0;
	}*/
#include<iostream>
#include<math.h>

using namespace std;

int M_search(int T[], int n, int m) {
	int i = 0; 
	int j,mid;
	j = n;
	while (i <= j) {
		mid = floor(i + j) / 2.0;
		if (m < T[mid])
			j = mid - 1;
		else if (m > T[mid])
			i = mid + 1;
		else
			return mid;
	}
	return 0;
}

int main()
{
	int T[100], n,m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> T[i];
	}
	cin >> m;
	cout << M_search(T, n, m) << endl;
	return 0;
}