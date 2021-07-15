#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

class Persona{
	
	private://Atributos
		int cedula;
		string nombre;
		int an,mn,dn;
		float peso;
		float altura;
		float IMC;
			
	public: //Metodos
		Persona(int,string,int,int,int,float,float);//Contructor
		void ingresar();
    	    				 
};
//Constructor
Persona::Persona(int _cedula,string _nombre,int _an,int _mn,int _dn,float _peso,float _altura){
	cedula = _cedula;
	nombre = _nombre;
	an = _an;
	mn = _mn;
	dn = _dn;
	peso = _peso;
	altura = _altura;   

}

void Persona::ingresar(){
	                
    system("cls");

    cout<<"\n\n"; 
    cout<<"\t\t\t\t\t //========================================//"<<endl; 
	cout<<"\t\t\t\t\t      1.Cedula             :  "<<0<<cedula<<"\n";         
    cout<<"\t\t\t\t\t      2.Nombre             :  "<<nombre<<"\n";    
	cout<<"\t\t\t\t\t      3.Fecha Nacimiento   :  "<<dn<<"/"<<mn<<"/"<<an<<"\n"; 
	cout<<"\t\t\t\t\t      4.Peso               :  "<<peso<<"(Kg)"<<"\n";          
	cout<<"\t\t\t\t\t      5.Estatura           :  "<<altura<<"(Mt)"<<"\n"; 
    cout<<"\t\t\t\t\t //========================================//"<<endl;
    cout<<"\n";    	
 
}

int cedula;
string nombre;
int an,mn,dn,aa,ma,da,a,m,d;
float peso;
float altura;
float IMC;

//FUCION PRINCIPAL

int main(){	         
    
    int op;
    while(op !=6){
    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\t\t\t\t  //                PROGRAMA: Class Persona            //"<<endl;
    	cout<<"\t\t\t\t  //                                                   //"<<endl;
    	cout<<"\t\t\t\t  //          AUTOR :                                  //"<<endl;
    	cout<<"\t\t\t\t  //                Alcivar Espinoza Nahomi            //"<<endl;
    	cout<<"\t\t\t\t  //                Bernal Galarraga Jared             //"<<endl;
    	cout<<"\t\t\t\t  //                Martinez Zambrano Anthony          //"<<endl;
    	cout<<"\t\t\t\t  //                Lara Segura Jeremy                 //"<<endl;
    	cout<<"\t\t\t\t  //                                                   //"<<endl;
    	cout<<"\t\t\t\t  //                    VESION: 1.0                    //"<<endl;
    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\n\n";
	    cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\t\t      //        1) OPCION.- 1 Ingresar y mostrar los datos personales            //"<<endl;
	    cout<<"\t\t      //        2) OPCION.- 2 Obtener Mostrar la edad de la persona              //"<<endl;   
		cout<<"\t\t      //        3) OPCION.- 3 Mostrar el indice comporal                         //"<<endl;
		cout<<"\t\t      //        4) OPCION.- 4 Guardar los datos en un archivo .txt               //"<<endl;
		cout<<"\t\t      //        5) OPCION.- 5 Recuperar los datos desde el archivo .txt          //"<<endl;
		cout<<"\t\t      //        6) Salir                                                         //"<<endl;
		cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\n\n";  
		cout<<" Digite una Opcion: ";    
		cin>>op;    		   	
		switch(op){
			case 1:
				//clrscr
				system("cls");
		
                 int perona();{
                    cout<<"\t\t\t\t //==============================================//"<<endl; 
                 	cout<<"\t\t\t\t     1.Ingrese su Cedula           :  ";cin>>cedula;                            	
                 	cout<<"\t\t\t\t     2.Ingrese su Nombre           :  ";cin>>nombre;     
					cout<<"\t\t\t\t     3.Ingrese su Fecha Nacimineto :  ";cin>>dn>>mn>>an;     
					cout<<"\t\t\t\t     4.Ingrese su Peso (Kg)        :  ";cin>>peso;     
					cout<<"\t\t\t\t     5.Ingrese su Estatura (Mt)    :  ";cin>>altura;                       	                 	
                 	cout<<"\t\t\t\t //==============================================//"<<"\n\n";			 	                 	
                 	system("pause");
                 	Persona p1 = Persona(cedula,nombre,an,mn,dn,peso,altura);
                	p1.ingresar();
 
                 }         				
				system("pause");
			    system("cls");
		        break;
		    
			case 2:
				//clrscr
				system("cls");
				int edadd();{
				
					cout<<"\n";
					cout<<"\t\t\t\t         //======================================//"<<endl; 
 	                cout<<"\t\t\t\t         //           La Fecha Nacimiento        //"<<endl;
 	                cout<<"\t\t\t\t         //======================================//"<<endl;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Dia: "<<dn;
 	                cout<<"\n\n";
 	                cout<<"\t\t\t - Mes: "<<mn;
 	                cout<<"\n\n";
 	                cout<<"\t\t\t - Anios: "<<an;
              		cout<<"\n";
					  		
					cout<<"\n";
					cout<<"\t\t\t\t      //============================================//"<<endl; 
 	                cout<<"\t\t\t\t      //           Ingrese la Fecha Actual          //"<<endl;
 	                cout<<"\t\t\t\t      //============================================//"<<endl;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Dia: ";cin>>da;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Mes: ";cin>>ma;
 	                cout<<"\n";
                    cout<<"\t\t\t - Anios: ";cin>>aa;
                    cout<<"\n";

 	                if(da>dn){
 		               d=da-dn;
 	                 }
					 else
					 {
	 	               da=da+31;
 		               ma=ma-1;
 		               d=da-dn;
 	                 }

	                 if(ma>mn){
 		                m=ma-mn;
 	                 }
					else
					{
 		               ma=ma+12;
 		               aa=aa-1;
 		               m=ma-mn;
 	                 }
	                  a=aa-an;
	                  cout<<"\t\t\t\t //======================================================//"<<endl;
	                  cout<<"\t\t\t                  Usted tiene : "<<a<<"  anios "<<m<<" meses y "<<d<< " dias"<<endl;
	                  cout<<"\t\t\t\t //======================================================//"<<endl;
                }  
				system("pause");
			    system("cls");
		        break;
				
			case 3:
				//clrscr
				system("cls");
		
				system("pause");
			    system("cls");
		        break;						    
		    
			case 4:
				//clrscr
				system("cls");
                void escribir();

                int guardar();{
                  void escribir();{
	                ofstream archivo;
	
	                archivo.open("Archivo.txt",ios::out); //Abriendo el archivo
	
	                if(archivo.fail()){
		               cout<<"No se pudo abrir el archivo";
		               exit(1);
	                }
	
	                archivo<<"Cedula : "<<0<<cedula<<"\n";  
	                archivo<<"Nombre : "<<nombre<<"\n";  
					archivo<<"Fecha Nacimiento : "<<dn<<"/"<<mn<<"/"<<an<<"\n";  
					archivo<<"Peso : "<<peso<<"(Kg)"<<"\n";
					archivo<<"Estatura : "<<altura<<"(Mt)"<<"\n"; 
					archivo<<"Edad : "<<a<<"  anios "<<m<<" meses y "<<d<< " dias"<<"\n";					       	                
	                archivo.close(); //Cerrar el archivo
                  }	               	
                }   
				system("pause");
			    system("cls");
		        break;		    

			case 5:
				//clrscr
				system("cls");
                void lectura();

                int recuperar();{
                  void lectura();{
	                ifstream archivo;
	                string texto;
	                
	                archivo.open("Archivo.txt",ios::in); //Abriendo el archivo modo lectura
	
	                if(archivo.fail()){
		               cout<<"No se pudo abrir el archivo";
		               exit(1);
	                }
	                
	                while(!archivo.eof()){  //mientras no sea el final del archivo	
	                	getline(archivo,texto);
	                	cout<<texto<<endl;	
									               	                	
	                }	                
	                	archivo.close(); // Cerramos el archivo	                
                  }	               	
                }
				system("pause");
			    system("cls");
		        break;		        
		    
                default:
                	if(op < 1||op >6){
                		system("cls");
                		cout<<endl<<"Este numero no es valido. . ."<<endl;
                		cout<<"\n\n";
						system("pause");
					    system("cls");
				    }			
		}
			
	}
    
    return 0;
}
