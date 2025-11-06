#include<iostream>
using namespace std;
class area
{
	private:
		int x,length,breadth;
		public:
			area()
			{
				x=length*breadth;
			}
			void show()
			{
				cout<<"Area of rectangle="<<length*breadth<<endl;
			}
};
int main()
{
	area a;
	a.show();
	return 0;
}
