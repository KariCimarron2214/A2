//programa de mayor promedio
//Creado por:karina cimarron
#include<iostream>//llama o incorpora la libreria en nuestro programa
using namespace std;//utilizamos para ejecutar el cout y cin y std
int main()//sirve para en capsular en el programa

{
	float x,pm=0;//declaramos variables de x y pm 
	int i=0,l;//declaramos el contador como entero
	cout<<"ingrese l: "; cin>>l;//se muestra al usuario para que ingrese un valor para l y lo guardamos con el cin
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.

	cout<<"ingrese x:  "; cin>>x;//mensaje al usuario que ingrese un valor para x y lo guardamos
	i=i+1;//escribimos el contador general
	if(x>pm){//utilizamos para evaluar si la condicion cumple 

		pm=x;//escribimos pm si es igual que x

	}
 
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"el promedio maximo del curso fue:  "<<pm<<endl<<endl;//se muestra al usuario el resultado del pm
	return 0;//finaliza la ejecucion del programa

}
