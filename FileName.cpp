#include <iostream>
#include <string>
using namespace std;

class youPet
{
public:
	youPet(string Name, int Age) :Name(Name), Age(Age)
	{cout << endl <<"你的宠物名字：" << Name << endl;
	 cout << "你的宠物年龄：" << Age << endl;
	 cout << "你的宠物生命值：" << Health <<endl;
	}

	string Name;
	int Age;
	float Health = 15.f;
};

int main()
{
	string youPetName;
	int youPetAge;
	cout << "你的宠物名：";
	cin >> youPetName;
	cout << "你的宠物年龄：";
	cin >> youPetAge;
	youPet yP(youPetName, youPetAge);
}

