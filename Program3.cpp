#include<iostream>
using namespace std;

class FlightDetails
{
          private:
                  int FlightNumber=0;
                  string Destination = "\0";
                  float Distance=0.0;
                  float fuel=0.0;

                  void CALFUEL()
                  {
                          if(Distance<=1000)
                          {
                            fuel=500;
                          }
                          else if(Distance>1000 && Distance<=2000)
                          {
                            fuel=1100;
                          }
                          else
                          {
                            fuel=2200;
                          }
                  }

            public:


                    void FEEDINFO()
                    {
                            cout<<"************************PLEASE ENTER DETAILS OF FLIGHT************************\n";
                            cout<<"Enter flight number:"<<endl;
                            cin>>FlightNumber;
                            cout<<"Enter Destination:"<<endl;
                            cin>>Destination;
                            cout<<"Enter Distance:"<<endl;
                            cin>>Distance;

                            CALFUEL();


                    }

                    void SHOWINFO()
                          {
                            cout<<"************************Details************************\n";
                            cout<<"Flight Number:"<<FlightNumber<<endl;
                            cout<<"Destination:"<<Destination<<endl;
                            cout<<"Distance:"<<Distance<<endl;
                            cout<<"Fuel Required:"<<fuel<<endl;
                    }


};


int main()
{
        FlightDetails obj1;
        obj1.FEEDINFO();
        obj1.SHOWINFO();
return 0;	

}
