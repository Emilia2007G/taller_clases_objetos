#include <iostream>
using namespace std;

class jugador{
	private:
		string nombre;
		int monedas;
	public:
		jugador(string n, int m){
			nombre=n;
			monedas=100;
		}	
		string getNombre(){
			return nombre;
		}
		int getmonedas(){
			return monedas;
		}
		void mostrar(){
			cout<<nombre<<": "<<" tiene "<<monedas<<endl;
		}
		void juego(char r1, char r2, char r3){
			for (int i=0;i<1;i++){
				if (r1==r2 and r1==r2 ){
					cout<<"Ganaste 50 monedas!!"<<endl;
                    monedas-=10;
                    monedas+=50;
                    cout<<"tienes: "<<monedas<<" monedas"<<endl;
				}
                else if (r1==r2 or r1==r3 or r2==r3){
                    cout<<"Ganaste 20 monedas!!"<<endl;
                    monedas-=10;
                    monedas+=20;
                    cout<<"tienes: "<<monedas<<endl;
                }
                else{
                    cout<<"Perdiste 10 monedas!!"<<endl;
                    monedas-=10;
                    cout<<"tienes: "<<monedas<<endl;
                }
                if (monedas<0)
                monedas=0;
   				 
			}
			return void();
		}
		
		
};

int main(){
	cout<<"Vamos a jugar el tragamonedas!!"<<endl;
	cout<<"Inicias con 100 monedas, OJO cada tiro vale 10 monedas"<<endl;
	cout<<"Si salen do simbolos iguales ganas 20 monedas y si salen las tres ganas 50 monedas!!!"<<endl;
	char simbolos[4]={'@','#','$','%'};
	string nombre;
	cout<<"Ingresa tu nombre: "<<endl;
	cin>>nombre;
    int monedas;
    jugador j(nombre, monedas);
    j.mostrar();
    char opcion;
    cout<< "Quieres tirar: (s/n) "<<endl;
    cin>>opcion;
    
    while(opcion!='n' or opcion!='N'){
    
    	    if(opcion=='s' or opcion=='S'){
        		cout<<"Tirando..."<<endl;
        		char r1= simbolos[rand()%4];
        		char r2= simbolos[rand()%4];
        		char r3= simbolos[rand()%4];
			 	cout<<"["<<r1<<"] ["<<r2<<"] ["<<r3<<"]"<<endl;
			 	j.juego(r1,r2,r3);
    } 
    		    char opcion;
    			cout<< "Quieres tirar: (s/n) "<<endl;
    			cin>>opcion;
    		 	if (opcion=='n' or opcion=='N')
   				 break;
   				 
    
    }//whiole
	}
