#include <iostream>

using namespace std;

int main(){
	int respuestas[3];
	int correctas = 0;
	
	cout<<"Bienvenido a este pequeno desafio.\n";
	cout<<"responde 3 preguntas para superarlo.\n";
	
	cout<<"cuanto es 3+5*2?\n";
	cin>>respuestas[0];
	
	cout<<"cuanto es 3+5*2?\n";
	cin>>respuestas[1];
	
	cout<<"cuanto es 3+5*2?\n";
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

char[] pregunta_aleatoria(){
	
	
	
	
	return"";
}


