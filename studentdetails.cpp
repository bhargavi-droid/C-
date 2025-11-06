#include<iostream>
using namespace std;
class student
{
	private:
		char n[20];
		int pinno;
		float per;
		public:
		void get()
		{
			cout<<"enter name";
			cin>>n;
			cout<<"enter pinno";
			cin>>pinno;
			cout<<"enter percentage";
			cin>>per;
		}
		void show()
		{
			cout<<"name="<<n<<endl;
			cout<<"rollno="<<pinno<<endl;
			cout<<"percentage="<<per;
		}
};
int main()
{
	student s;
	s.get();
	s.show();
}
