
#include <iostream>
#include <cstdlib>
#include <cmath>

using std::min;
using std::cout;
using std::endl;


void MC(int N);
double g(float x);
    
int main()
{
  MC(1000);
  return 0;
}

void MC(int N)
{
  srand48(10);
  double x;
  float ne;
  double propuesta;
  double r;
  float sigma;
  float nuevo;
  
  sigma = 1; 
  nuevo = drand48();
  x = drand48();
  
  float respuesta;
  respuesta = 2* nuevo - sigma;
    
 int i; 
 for(i=0;i<1000;i++)
 {
    propuesta = x + respuesta;
    ne=drand48();
    r =min(1.0,g(propuesta)/g(x));
           
    if (ne<r){
    x = propuesta;
    }
    
    else {
        x = x;
    }
    
  cout << x << " "<< endl;
  }    
}

double g(float x)
           {
      return exp(-(x*x)/2);
}


