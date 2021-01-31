// introduction to classes


#include <iostream>
#include <string>
using namespace std;

class Cars{
  private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    void setData(string cname, string mname, string ftype, float m, double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    void displayData()
    {
        cout<<"Car Properties"<<endl<<endl;
        cout<<"Car Company Name - "<<company_name<<endl;
        cout<<"Car Company Model - "<<model_name<<endl;
        cout<<"Car Fuel Type - "<<fuel_type<<endl;
        cout<<"Car Mileage -"<<mileage<<endl;
        cout<<"Car Price - "<<price<<endl;
}
};

int main()
{
    Cars car1;

    car1.setData("Ford","Mustang","gasoline",16,30000);
    car1.displayData();
    return 0;
}
