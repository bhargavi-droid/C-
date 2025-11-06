#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
		public:
			sample()
			{
				x=67;
			}
			void show()
			{
				cout<<"x="<<x;
			}
};
int main()
{
	sample s;
	s.show();
	return 0;
}
