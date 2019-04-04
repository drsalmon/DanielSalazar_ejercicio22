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

double g(float x){
      return exp(-(x*x)/2);
}

void MC(int N)
{
/* Creo las variables necesarias para metropolis en este bloque*/    
  int i;  
  srand48(10);
  double x;
  float ne;
  double propuesta;
  float r;
  float sigma;
  float nuevo;
  float respuesta;
    
/* Se inicializan algunas de las variables */ 
  sigma = 1; 
  nuevo = drand48();
  x = drand48();
      
  respuesta = 2*nuevo - sigma;
   
/* Se realiza el ciclo que cumple el metodo de metropolis */    
 for(i=0;i<=1000;i++)
 {
    propuesta = x + respuesta;
    r =min(1.0,g(propuesta)/g(x));
    ne=drand48();
    
           
    if (ne<r){
    x = propuesta;
    }
    
    else {
        x = x;
    }
/* Como resultado se imprime el valor de x */    
  
    cout << x << " " << endl;
  }    
}



