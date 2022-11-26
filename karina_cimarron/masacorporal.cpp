//programa de masa corporal
//Creado por:karina cimarrom
#include <iostream>//llama o incorpora la libreria en nuestro programa
using namespace std;//tilizamos para ejecutar el cout y cin y std
int main ()// sirve para en capsular en el programa
{
	float imc,peso,altura;//declaramos los variables de imc,peso y altura
	cout<<"Ingrese el peso (kg): ";cin>>peso;//para mostrar mensaje en pantalla al usuario que ingrese y lo guardamos
	cout<<"Ingrese la altura (metros): ";cin>>altura;//pedimos al usuario que ingrese su altura y lo guardamos
	imc=peso/(altura*altura)//escribimos el imc general 
			;
		
	if(imc<18.5){//utilizamos si es verdadero la condicion 
		cout<<"Usted tiene bajo peso"<<endl;//se muestra al usuario el resultado 
	}
	if(imc>=18.5 && imc<24.9){//utilizamos si la condicion se cumple
		cout<<"Usted tiene peso normal"<<endl;//se muestra el mensaje al usuario
	}

	if(imc>=25 && imc<26.9){//utilizamos con la condicion verdadera
		cout<<"Usted tiene sobrepeso grado I"<<endl;//se muestra el mensaje en pantalla al usuario
	}

	if(imc>=27 && imc<29.9){//utilizamos con la condicion verdadero si es  mayor  
		cout<<"Usted tiene sobrepeso grado II"<<endl;//se muestra el resultado al usuario
	}

	if(imc>=30 && imc<34.9){//con la condicion se cumple si es mayor o menor
		cout<<"Usted tiene obesidad tipo I"<<endl;// se muestra el resultado
	}

	if(imc>=35 && imc<39.9){//utilizamos si es verdadero la condicion de imc si mayor o menor 
		cout<<"Usted tiene obesidad tipo II"<<endl;//se muestra el resultado del valor ingresado por el usuario
	}

	if(imc>=40 && imc<49.9){//imc es mayor o menor que 49.9 
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;//se muestra el resultado al usuario en la pantalla
	}

	if(imc>=50){//imc si es mayor que 50 
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;//se muestra el mensaje al usuario del resultado
	}
	return 0;//utilizamos para finalizar la ejecucion 
}
