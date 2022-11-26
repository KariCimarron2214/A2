//programa de saldo final
//Creado por: karina cimarron
#include<iostream>//permite la entrada y salida  de datos en la libreria.
using namespace std;// para utilizar cin, cout y  std.
int main()//el cuerpo del programa.


{
	float x,s=0;//declaramos variables de x y s, 
	int i=0,l;//utilizamos el i como el contador en variable
	cout<<"ingrese cantidad de egreso (l):  ";// mensaje al asuario en pantalla para que ingrese una cantidad
		cin>>l;//guardamos la cantidad ingresado por el usuario
        cout<<"ingrese saldo inicial (s):  ";//el usuario que ingrese un valor para s.
	cin>>s;//guardamos el valor ingresado
	do{//utilizamos para hacer repeticiones, hasta que cumpla la condicion.
	
	cout<<"ingrese egreso (x):  ";// el usuario  puede  ver el mensaje  
	cin>>x;//guardamos valor ingresado de x
	i=i+1;//escribimos el contador general 
	s=s+x;//escribimos el acumulador general 
	}while(i<l);//utilizamos para ejecutar elementos hasta que la condicion finalize
	cout<<"el saldo final es:  "<<s<<endl;//se muestra el mensaje al usuario del resultado
	return 0;//finaliza el programa o la ejecucion

}
