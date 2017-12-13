#include <conio.h>
#include <iostream.h>
int suma(int a, int b);
int factorial(int c);
int f=1;
main(){
	int a,b,c;
	cout<<"hola mundo"<<endl;
	cout<<"ingresa un numero: ";
	cin>>a;
	cout<<"ingresa otro numero: ";
	cin>>b;
	cout<<"el resultado de la suma de los dos numeros es: "<<suma(a,b);
   cout<<"\n\nIngresa un numero para sacar su factorial: ";
   cin>>c;
   cout<<"El factorial de "<<c<<" es: "<<factorial(c);
	getch();
}
int suma(int a, int b){
	int res;
   res=a+b;
   return res;
}
int factorial(int c){
   if(f==1){
   	int a;
      a=c*2;
   	cout<<"\n\nla suma de los numeros "<<c<<" y "<<a<<" es: "<<suma(c,a)<<endl;
      f=0;
   }
	int res=c;
   for (int i=1 ; i<c ; i++){ //cual repoio >:v
         res=i*res;
   }
   return res;
}