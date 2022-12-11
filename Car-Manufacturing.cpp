#include <iostream>

using namespace std;

class Country{
    public:
        string CountryName;
        
        void Sell() {
            cout << "Cars are for sale in this country" << endl;
        }
};

class Mercedes{
    public:
        string Color;
        int MaxSpeed;
        float Price;
        bool IsManual;
        
        Country country;
        
        void moving(){
            cout << "This car is for sale in " << country.CountryName << endl;
            cout << "This Mercedes has " << MaxSpeed << " km/h max speed" << endl;
            cout << "This Mercedes is " << Color << " in color" << endl;
            cout << "This Mercedes's price is " << Price << "k $" << endl;
            cout << "This Mercedes is " << IsManual << "   (0 - Automatic,  1 - Manual)"<< endl;
            cout << endl;
        }
};

class Toyota{
    public:
        string Color;
        float Price;
        int HorsePower;
        
        Country country;
        
        void moving(){
            cout << "This car is for sale in " << country.CountryName << endl;
            cout << "This Toyota is " << Color << " in color" << endl;
            cout << "This Toyota's price is " << Price << "k $" << endl;
            cout << "This Toyota has " << HorsePower << " horse power" << endl; 
            cout << endl;
        }
};

class McLaren{
    public:
        string Color;
        float Price;
        int NumberOfManufacturedCars;
        
        Country country;
        
        void moving(){
            cout << "This car is for sale in " << country.CountryName << endl;
            cout << "This McLaren is " << Color << " in color " << endl;
            cout << "This McLaren's price is " << Price << "k $" << endl;
            cout << "There are only " << NumberOfManufacturedCars << " models of this car in the world!" << endl;
            cout << endl;
        }
};


int main()
{
    Country country1;
    country1.CountryName = "Spain";
    
    Mercedes mercedes1;
    mercedes1.country = country1;
    mercedes1.MaxSpeed = 300;
    mercedes1.Color = "Blue";
    mercedes1.Price = 57.5;
    mercedes1.IsManual = false;
    
    mercedes1.moving();


    Country country2;
    country2.CountryName = "Sweden";
    
    Toyota toyota1;
    toyota1.country = country2;
    toyota1.Color = "Grey";
    toyota1.Price = 43.65;
    toyota1.HorsePower = 130;
    
    toyota1.moving();
    
    Country country3;
    country3.CountryName = "Germany";
    
    McLaren mc1;
    mc1.country = country3;
    mc1.Color = "Red";
    mc1.Price = 680;
    mc1.NumberOfManufacturedCars = 20;
    
    mc1.moving();
    
    return 0;
}
