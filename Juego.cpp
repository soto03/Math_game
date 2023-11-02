#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string pregunta_aleatoria(){
	string suma = "+";
	string resta = "-";
	string multi = "*";
	string divi = "/";
	string ope[4] = { "+","-", "*","/"};

	int semilla = time(NULL);
	srand(semilla);

	int cantidad_num = rand() % 4 + 2;
	string pregunta = "";
	
	for(int i=0; i<cantidad_num; i++){
		if( i == cantidad_num - 1){
			pregunta = pregunta  + to_string(rand() % 20 + 1) + " ";
		}
		else{
			pregunta = pregunta  + to_string(rand() % 20 + 1) + " " + ope[rand() % 3 + 0] + " ";
		}
	}
	
	
	
	return pregunta;
}

int main(){

	int respuestas[3];
	int correctas = 0;
	
	cout<<"Bienvenido a este pequeno desafio.\n";
	cout<<"responde 3 preguntas para superarlo.\n";
	
	cout<<"cuanto es " + pregunta_aleatoria() + "?\n";
	cin>>respuestas[0];
	
	cout<<"cuanto es " + pregunta_aleatoria() + "?\n";
	cin>>respuestas[1];
	
	cout<<"cuanto es " + pregunta_aleatoria() + "?\n";
	cin>>respuestas[2];
	
	if(respuestas[0] == 13){
		cout<<"La respuesta a la primera pregunta es correcta\n";
		correctas = correctas + 1;
	} 
	else{
		cout<<"La respuesta a la primera pregunta es incorrecta\n";
	}
	if(respuestas[1] == 13){
		cout<<"La respuesta a la segunda pregunta es correcta\n";
		correctas = correctas + 1;
	} 
	else{
		cout<<"La respuesta a la segunda pregunta es incorrecta\n";
	}
	if(respuestas[2] == 13){
		cout<<"La respuesta a la tercera pregunta es correcta\n";
		correctas = correctas + 1;
	} 
	else{
		cout<<"La respuesta a la tercera pregunta es incorrecta\n";
	}
	if(correctas >= 2){
		cout<<"felicidades aprobaste\n";
		
	}
	else{
		cout<<"te equivocaste intentalo de nuevo\n";
	}
}




