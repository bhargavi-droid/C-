#include<iostream>
using namespace std;
class increment
{
	int x;
	public:
		void get(){
			x=96;
		}
		void show(){
			cout<<"x="<<x<<endl;
		}
		friend void operator ++(increment &i);
};
void operator ++(increment &i)
{
	i.x=++i.x;
}
int main(){
	increment i;
	i.get();
	++i;//i.opertor ++(i);
	i.show();
}
