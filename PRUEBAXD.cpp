#include <iostream>

using namespace std;

float sumar(float a ,float b){
return(a+b)
}
float restar(float a,float b){
return a-b;
}
float multiplicar(float a,float b){
return a*b;
}
float divicion(float a,float b){
return a/b;
   else{
      cout<<"Error:no se puede divir entre cero"<<end 
   } 
}
int main()
{
   float num1,num2,resultado;
    char operacion ;
    
    cout << "Ingrese el numero" << endl;
    cin>> num1;
   cout<<"ingrese un operador"<<endl;
   cin>> operacion;
    cout<<"ingrese el segundo numero"<<endl;
    num2;
   switch (operacion){
   case'+':
      resultado=sumar(num1,num2);
      break;
   case'-':
      resultado=restar(num1,num2);
      break;
   case'*':
      resultado=multiplicar(num1,num2);
      break;
   
    return 0;
}






