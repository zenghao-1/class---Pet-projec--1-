#include <iostream>
#include <string>
using namespace std;

class youPet
{
public:
	youPet(string Name, int Age) :Name(Name), Age(Age)
	{cout << endl <<"��ĳ������֣�" << Name << endl;
	 cout << "��ĳ������䣺" << Age << endl;
	 cout << "��ĳ�������ֵ��" << Health <<endl;
	}

	string Name;
	int Age;
	float Health = 15.f;
};

int main()
{
	string youPetName;
	int youPetAge;
	cout << "��ĳ�������";
	cin >> youPetName;
	cout << "��ĳ������䣺";
	cin >> youPetAge;
	youPet yP(youPetName, youPetAge);
}

