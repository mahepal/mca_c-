#include<iostream>
using namespace std;
class Integer
{
	private:
		int i;
	public:
		long calcFactorial()
		{
			long ans=1;
			for(int j=1;j<=i;j++)
			ans*=j;
			return(ans);
		}
		int checkPrime()
		{
			int flag=0;
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag =0;
					return flag;
				}
				else
				{
					flag = 1;
				}
			}
			return flag;
		}
	void set(int n)
	{
			i=n;
	}
	int add(int m)
	{
		i=i+m;
		return i;
		
	}
	int sub(int m)
	{
		i=i-m;
		return i;
		
	}
	int mul(int m)
	{
		i=i*m;
		return i;
		
	}
	int increment()
	{
		i++;
	}
	void show()
	{
		cout<<"number is:"<<i<<endl;
	}
};
int main()
{
	long ans,a1;
	int c;
	Integer a;
	a.set(11);
	a.show();
	/*
	ans=a.calcFactorial();
	cout<<"factorial="<<ans<<endl;
	*/
	ans=a.checkPrime();
	if(ans==1)
		cout<<"prime number:"<<endl;
	else
		cout<<"not prime number:"<<endl;
	/*
	ans=a.add(6);
	cout<<"update of i is:"<<ans<<endl;

	a1=a.sub(4);
	cout<<"update of i is:"<<a1<<endl;
	
	ans=a.mul(5);
	cout<<"update of i is:"<<ans<<endl;
	*/	
	
}

		

