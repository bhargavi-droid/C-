#include<iostream>
using namespace std;
class unary
{
	int x;
	public:
		void get(){
			x=96;
		}
		void show(){
			cout<<"x="<<x<<endl;
		}
		void operator ++(){
			x=++x;
		}
};
int main(){
	unary u;
	u.get();
	u.operator ++();
	u.show();
}
