#include <iostream>
#include <string>
using namespace std;
/******************************Subclass Sandbox Pattern***********************************/


class Command
{
public:
	virtual ~Command() {}

protected:
	//Subclass Sandbox Method that needs to be defined in subclasses.
	virtual void activate() = 0;

	/*********************************Methods shared by all commands******************************/

	void posEffect(double x, double y, double z)
	{
		cout << "Calling posEffect function of superclass Command" << endl;
	}

	void envEffect(string type)
	{
		cout << "Calling envEffect function of superclass Command" << endl;
		cout << type << endl;
	}

	void playSound(string sound, double volume)
	{
		cout << "Calling playSound function of superclass Command" << endl;
		cout << "Playing command sfx" << endl;
		cout << sound << endl << endl;
	}

	/************************************************************************************************/
};