#include<iostream>
using namespace std;
class sample
{
		static int x;
		public:
		static	void show()
			{
				cout<<x;
			}
};
int sample::x=10;
int main()
{
	sample::show();
	return 0;
}
