#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int giaithua;
	cout<<"Nhap n: ";
	cin>>n;
	int *ptr = &n;
	for(int i=1 ; i<=n; i++){
		giaithua *=i;
	}
	int *giaithuaptr = &giaithua;
	cout<<"Giai thua "<<n<<" la: "<<(*giaithuaptr);
	return 0; 
}
