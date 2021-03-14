#include<iostream>
using namespace std;

class Max_No
{
		
          private:
                  int ival1=0;
                  int ival2=0;



          public:
                  int Compare_no()
                  {
                    cout<<"Enter two numbers:"<<endl;
                    cin>>ival1;
                    cin>>ival2;

                    if(ival1>ival2)
                    {
                      cout<<ival1<<" is greater than "<<ival2<<endl;
                    }
                    else
                    {
                      cout<<ival2<<" is greater than "<<ival1<<endl;
                    }
                  }
		
	

};

int main()
{
        Max_No obj1;
        obj1.Compare_no();

}
