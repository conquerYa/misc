#include <iostream>
using namespace std;

int main(){
	int n, m ;
	cin >> n >> m;
	int *a = new int[n*m];
	for(int i = 1;i < n;i++)
		for(int j = 1;j < m;j++)
			cin >> a[(i-1)*m+j-1];
	return 0;
}