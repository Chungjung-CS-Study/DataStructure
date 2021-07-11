#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
using std::cin;
using std::cout;

int main (void)
{
	double m,n;
	cin >> m;
	cin >> n;
	cout << "입력받은 m과 n의 값:"<<m<<","<<n<<endl;
	
	double x = std::sqrt(m);
	double y = std::sqrt(n);
	
	double minimum = min(x, y);
	double maximum = max(x, y);
	
	double ceilmin = ceil(minimum);
	double floormax = floor(maximum);
	
	cout<<ceilmin<<" "<<floormax<<endl;
	
	int i;
	int sum=0;
	for(i=ceilmin;i<=floormax;i++)
	{
		sum+=i*i;
		
	}
	
	int minsqr = ceilmin*ceilmin;

	cout<<"Sum: "<< sum<< endl;
	cout<<"Min: "<<minsqr <<endl;
	return 0;
}
