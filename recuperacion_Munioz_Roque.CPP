#include <conio.h>
#include <iostream.h>
int suma(int a, int b);
main(){
	int a,b;
	cout<<"hola mundo"<<endl;
	cout<<"ingresa un numero: ";
	cin>>a;
	cout<<"ingresa otro numero: ";
	cin>>b;
	cout<<"el resultado de la suma de los dos numeros es: "<<suma(a,b);
	getch();
}
int suma(int a, int b){
	int res;
   res=a+b;
   return res;
}