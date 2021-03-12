#include<iostream>
using namespace std;

class Demo
{
        public:
                int iMarks;
                int Maths;
                int English;
                int science;
                int iRes;

        void CheckGrade()
        {
                cout<<"Enter Marks:"<<endl;
                cin>>iMarks;
                if(iMarks>75)
                {
                  cout<<"Distinction\n";
                }
                else if(iMarks>35 && iMarks<75)
                {
                  cout<<"First class\n";
                }
                else
                {
                  cout<<"Fail\n";
                }
        }
		
        void Average()
        {
                  cout<<"Enter marks for three subject to calculate their Average"<<endl;
                  cout<<"Maths";
                  cin>>Maths;	
                  cout<<"English";
                  cin>>English;	
                  cout<<"science";
                  cin>>science;	

                  cout<<"Average is:"<<(Maths+English+science)/3<<endl;
        }

};


class Demo1
{
        public:
          Demo1()
          {
            cout<<"Inside Default constructor"<<endl;
          }

          Demo1(int i)
          {
            cout<<i<<"\n";
            cout<<"Inside Parameterized constructor"<<endl;
          }

          ~Demo1()
          {
            cout<<"Inside distructor"<<endl;
          }

};


class Demo2
{
	public:
		int ival1;
		int ival2;
		
		
		void Add()
		{
			cout<<"Enter values"<<"\n";
			cin>>ival1;
			cin>>ival2;
			cout<<"Addition is:"<<ival1+ival2<<endl;
		}
		
		Demo2()
		{
			cout<<"Inside Default constructor in Demo2 class\n";
		}
		
		~Demo2()
		{
			cout<<"Inside Destructor\n";
		}
		
		

};


int main()
{
      Demo Obj1;
      Obj1.CheckGrade();
      Obj1.Average();

      Demo1 obj2;
      Demo1 obj4();
      Demo1 obj5(2);

      Demo2 obj3;

      obj3.Add();

      return 0;
}
