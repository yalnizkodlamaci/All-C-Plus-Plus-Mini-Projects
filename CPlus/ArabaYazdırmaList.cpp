#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

class Car
{
public:

	Car(const string& Name, const string& Model) : carName(Name), carModel(Model) {};

	string getName() { return carName; }
	string getModel() { return carModel; }
private:

	string carName;
	string carModel;
};

int main()
{
	bool döngü = true;
	string cars, model;
	int choise;

	vector<Car> carlist;
	

	while (döngü == true)
	{
		cout << "Araba Ismi Gir:" << endl;
		cin >> cars;
		cout << "Araba Modeli Gir:" << endl;
		cin >> model;

		Car car(cars,model);
		 
		carlist.push_back(car);	

		cout << "\n Eklemeye devam etmek istiyor musun \n " << endl;
		cout << "*Donguden cikip yazdiklarini gormek icin : 1" << endl;
		cout << "*Eklemeye devam etmek icin : 2" << endl;

		cin >> choise;
		if(choise == 1)
		{
			döngü = false;
		}
		else if(choise == 2)
		{
			döngü = true;
		}
	}

	cout << setw(10) << "Cars" << setw(10) << "Model" << endl;
	for(int i = 0; i < carlist.size(); i++)
	{

		cout << setw(10) << carlist[i].getName() << setw(10) << carlist[i].getModel() << endl;


	}
	

	cout << setprecision(1);

	cout << "zaaaaa";

}