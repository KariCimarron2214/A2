//programa de calculaedad
//Creado por:karina cimarron
#include<iostream>//permite la entrada y salida de datos en la libreria.
using namespace std;// para utilizar cin, cout y  std.
int main()//el cuerpo del programa 

{
	int aa,ma,da,an,mn,dn,a,m,d;//declaramos los variables
	cout<<"ingrese la fecha actual: ";//muestra mensaje al usuario en pantalla 
	cin>>aa>>ma>>da;//guarda los datos ingresado del usuario

	cout<<"ingrese la fecha de nacimiento:  ";//el usuario tiene que ingresar el dato que sale en la pantalla
	cin>>an>>mn>>dn;//guardamos el dato ingresado por el usuario
	if(da>dn){//utilizamos cuando es verdadero la condicion
		d=da-dn;//declarmos variable de dia 

	}else{//utilizamos cuando la condicion es falso
		da=da+30;//declaramos dia actual
		ma=ma-1;//decalramos mes actual
		d=da-dn;//declaramos dia 

	}
	if(ma>mn){//utilizamos cuando  si es verdadero
		m=ma-mn;//escribimos el mes 
	}else{//utilizamos si la condicion es falso
		ma=ma+12;//escribimos mes actual para finalizar
		aa=aa-an;//escribimos año actual para finalizar
		m=ma-mn;//escribimos el mes general
	}
	a=aa-an;//escribimos el año general para finanlizar
	cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl;//mostramos al usuario el mensaje en pantalla el resultado
	return 0;//finaliza la ejecucion.

}
