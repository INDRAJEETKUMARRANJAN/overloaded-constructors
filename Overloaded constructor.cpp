// Overloaded constructor 
#include <iostream>
using namespace  std;

   class complex 
   {
       float x,y;
       
       public:
         
         complex(){}                                  // constructor no arg
         complex(float a){x=y=a;}                    //  constructor-one arg
         complex(float real, float imag)             //  constructor- two args
         {x = real; y = imag;}
         
         friend complex sum(complex,complex);
         friend void show(complex);
         
   };
   complex sum(complex c1, complex c2)              // friend
   { 
       complex c3;
       c3.x = c1.x + c2.x;
       c3.y = c1.y + c2.y;
       return(c3);
   }
   void show(complex c)                            // friend
   { 
       std::cout << c.x <<" + j" << c.y << "\n";
   }
   int main()
   {
       complex A(2.7, 3.5);                       // define & initialize
       complex B(1.6);                            // define & initialize
       complex C;                                 // define 
       
       C = sum(A, B);                             // sum () is a friend
       cout << "A = "; show(A);                   // show() is also friend
       cout << "B = "; show(B);
       cout << "C = "; show(C);
        
        return 0;
   }
       