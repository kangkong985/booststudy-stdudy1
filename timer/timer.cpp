#include<boost/timer.hpp>
#include<iostream>
using namespace boost;
using namespace std;
int main()
{
	timer time;
	cout << "max timespan  " << time.elapsed_max()/3600 << endl;
	cout << "min timespan  " << time.elapsed_min() << endl;
	cout << "now time   " << time.elapsed() << endl;
	system("pause");
	return 0;
}