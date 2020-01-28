#include<iostream>
#include<string.h>
using namespace std;

class Person
{
   private:
	char name[10];
	char surname[10];
	int age;
	char gender;
   public:
	void setName(char []);
	void setSurname(char []);
	void setAge(int);
	void setGender(char);
	void setPerson(char[],char[],int,char);
	void showPerson();

};
int main()
{
	/*
	Person ram;
	ram.setName("priyanka");
	ram.setSurname("mahepal");
	ram.setAge(21);
	ram.setGender('F');
	ram.showPerson();
	*/
	/*
	Person sardar;
	char nm[10];char snm[10];int age;char gender;
	cout<<"enter the name of sardar:";
	cin>>nm;
	sardar.setName(nm);
	cout<<"enter the surname of sardar:";
	cin>>snm;
	sardar.setSurname(snm);
	cout<<"enter the age of sardar:";
	cin>>age;
	sardar.setAge(age);
	cout<<"enter gender name of sardar:";
	cin>>gender;
	sardar.setGender(gender);
	sardar.showPerson();
	*/
	Person amit;
	amit.setPerson("mehul","jethva",26,'M');
	amit.showPerson();
	return 0;
}
void Person::setPerson(char nm[],char snm[],int ag,char gen)
{
	setName(nm);
	setSurname(snm);
	setAge(ag);
	setGender(gen);
}
void Person::setName(char nm[])
{
	strcpy(name,nm);
}
void Person::setSurname(char snm[])
{
	strcpy(surname,snm);
}
void Person::setAge(int ag)
{
	age = ag;
}
void Person::setGender(char gen)
{
	gender= gen;
}
void Person::showPerson()
{
	cout<<"name is:"<<name<<endl;
	cout<<"surname is:"<<surname<<endl;
	cout<<"age is:"<<age<<endl;
	cout<<"gender is:"<<gender<<endl;
}

