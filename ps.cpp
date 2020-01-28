#include<iostream>
using namespace std;
class Distance
{
	private:
		int n;
	public:
		void setN(int n1)
		{
			n=n1;
		}
		void add(Distance x)
		{
			n=x.n+n;
		}
		void sub(Distance x)
		{
			n=x.n-n;
		}
		void show()
		{
			cout<<n<<endl;
		}
};
int main()
{
	Distance a,b;
	a.setN(7);
	a.show();
	b.setN(9);
	b.show();
	a.add(b);
	a.show();
	a.sub(b);
	a.show();
	cout<<endl;
}
