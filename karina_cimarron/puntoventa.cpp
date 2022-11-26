//programa de punto venta
//creado por: karina cimarron
#include<iostream>//se utiliza para poder ingresar a la libreria
using namespace std;//para utilizar comandos de cout, cin y std
int main()//cuerpo de programa

{      
	//utilizamos float para declarar variables x, s  
      float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn; 
      //para declarar variables en numeros enteros del contador
      int i=0,l; 
      cout<<"ingrese l:  ";cin>>l;//mensaje para el usuario 
    	do{ //hacer o mientra 
         cout<<"ingrese x:  ";cin>>x;//mensaje al usuario para que ingrese un valor
	i=i+1;//variavle del contador 
	s=s+x;//variable del acumulador
	
	}while(i<l);//ejecuta un elemento
	 vb=s;//variable del vb
	viva=vb*piva/100;//variable de viva
	vdesc=vb*pdesc/100;//variable de vdesc
	vn=vb+viva-vdesc;//variable de vn
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;//mensaje del resultado final
	return 0;//finaliza el programa

	}

