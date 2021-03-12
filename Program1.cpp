#include<iostream>

class ArithmeticOperation
{

      public:

      int Addition(int iNo1,int iNo2,int iNo3)
      {


            int iResult=0;
            iResult=iNo1+iNo2+iNo3;

            std::cout<<"Addition is"<<iResult<<std::endl;


      }

      int Substraction(int iNo1,int iNo2,int iNo3)
      {


            int iResult=0;
            iResult=iNo1-iNo2-iNo3;

            std::cout<<"Substraction is"<<iResult<<std::endl;


      }
		
		int Multiplication(int iNo1,int iNo4,int iNo5)
		{
			
			
            int iResult=0;  
            iResult=iNo1*iNo4*iNo5;

            std::cout<<"Multiplication is"<<iResult<<std::endl;

			
		}
};

int main()
{
	int iVal1=0;
	int iVal2=0;
	int iVal3=0;
	int iVal4=0;
	int iVal5=0;
	
	std::cout<<"Enter Values\n";
	std::cin>>iVal1;
	std::cin>>iVal2;
	std::cin>>iVal3;
	std::cin>>iVal4;
	std::cin>>iVal5;
		
	ArithmeticOperation obj;
	obj.Addition(iVal1,iVal2,iVal3);
	obj.Substraction(iVal1,iVal2,iVal3);
	obj.Multiplication(iVal1,iVal4,iVal5);
	
	return 0;
}
