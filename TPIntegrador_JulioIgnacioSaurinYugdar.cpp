#include <iostream>
using namespace std;

//Declaracion de las clases
class Libros {
public:
	string titulo;
	string autor;
	string resenia;
};

class Peliculas {       
public:            
	string titulo;       
	string autor; 
	string protagonista;
	int anio;
	int porcentajeCriticas;
	string resenia;
};

class Canciones{
public:
	string titulo;
	string autor; 
	string interprete;
	int cantidadReproducciones;
	string resenia;
};
//Fin declaracion de las clases
//Estableciendo las funciones que luego me retornaran los valores ingresados
void mostrarPelicula (string titulo, string autor, string protagonista ,int anio, int porcentajeCriticas, string resenia);
void mostrarLibros (string titulo, string autor, string resenia);
void mostrarCanciones (string titulo, string autor, string interprete, int cantidadReproducciones, string resenia);
int main() {
	int eleccion;
	cout << "Seleccione el campo que desea ingresar: " <<endl;
	cout << "1 - Libros " << "\n" << "2 - Peliculas " << "\n" << "3 - Canciones ";
	cin >> eleccion;
	if (eleccion == 1){
		int cantidadLibros; 
		cout << "Ingrese la cantidad de libros que quiere cargar: "; 
		cin >> cantidadLibros;
		Libros mis_libros[10];
		
		for (int i = 0; i < cantidadLibros; i++){
			cout << "Libro n° " << i + 1<< ":" << "\n";
			cout << "Ingresar el titulo: ";
			cin >> mis_libros[i].titulo;
			cout << "Ingresar el autor del libro: ";
			cin >> mis_libros[i].autor;
			cout << "Ingresar la resenia del libro: ";
			cin >> mis_libros[i].resenia;
		}
		
		for (int i = 0; i < cantidadLibros; i++){
			mostrarLibros (mis_libros[i].titulo, mis_libros[i].autor, mis_libros[i].resenia);
		}
	}
	if (eleccion == 2){
		int cantidadPeliculas;
		cout << "Ingrese la cantidad de peliculas que quiere cargar: " << endl;
		cin >> cantidadPeliculas;
		Peliculas mis_peliculas[10];
	
		for(int i = 0; i < cantidadPeliculas; i++)
		{
		cout << "Pelicula n° " << i + 1<< ":" << "\n";	
		cout << "Ingrese el titulo: ";
		cin >> mis_peliculas[i].titulo;
		cout << "Ingrese el autor de la pelicula: "; 
		cin >> mis_peliculas[i].autor;
		cout << "Ingrese el protagonista de la pelicula: ";
		cin >> mis_peliculas[i].protagonista;
		cout << "Ingrese el anio de estreno de la pelicula: "; 
		cin >> mis_peliculas[i].anio;
		cout << "Ingrese el porcentaje de criticas positivas que tuvo la pelicula: ";
		cin >> mis_peliculas[i].porcentajeCriticas;
		cout << "Ingrese la resenia de la pelicula: ";
		cin >> mis_peliculas[i].resenia;
	}
	
		for (int i = 0; i < cantidadPeliculas; i++){
			mostrarPelicula(mis_peliculas[i].titulo, mis_peliculas[i].autor, mis_peliculas[i].protagonista , mis_peliculas[i].anio , mis_peliculas[i].porcentajeCriticas, mis_peliculas[i].resenia);
		}
	}
	if (eleccion == 3){
		int cantidadCanciones;
		cout << "Ingrese la cantidad de canciones que quiere cargar: " << endl;
		cin >> cantidadCanciones;
		Canciones mis_canciones[10];
		
		for (int i = 0; i < cantidadCanciones; i++)
		{
			cout << "Cancion n° " << i + 1<< ":" << "\n";
			cout << "Ingresar el titulo: ";
			cin >> mis_canciones[i].titulo;
			cout << "Ingresar el autor de la cancion: ";
			cin >> mis_canciones[i].autor;
			cout << "Ingresar el interprete de la cancion: ";
			cin >> mis_canciones[i].interprete;
			cout << "Ingresar la cantidad de reproducciones en Sporitfy: ";
			cin >> mis_canciones[i].cantidadReproducciones;
			cout << "Ingresar una resenia de la cancion:"; 
			cin >> mis_canciones[i].resenia;
		}
		for (int i = 0; i < cantidadCanciones; i++)
		{
			mostrarCanciones(mis_canciones[i].titulo, mis_canciones[i].autor,mis_canciones[i].interprete, mis_canciones[i].cantidadReproducciones, mis_canciones[i].resenia);
		}
	}
	return 0;
}

void mostrarPelicula (string titulo, string autor, string protagonista, int anio, int porcentajeCriticas, string resenia){
	int eleccion;
	
	cout << "¿Como quere ver los datos?" << "\n" <<  "1. Por anio. " << "\n" << "2. Toda la informacion. ";
	cin >> eleccion;
	if (eleccion == 1){
		cout << "Titulo: "<< titulo << "\n";
		cout << "Anio de estreno: " << anio << "\n";
	}
	else if (eleccion == 2){
		cout << "Los datos que usted ingreso fueron: " <<endl;
		cout << "Titulo: "<< titulo << "\n";
		cout << "Autor: " << autor << "\n";
		cout << "Protagonista: "<< protagonista << "\n";
		cout << "Anio de estreno: " << anio << "\n";
		cout << "Porcentaje de criticas positivas: " << porcentajeCriticas << "%" << "\n";
		cout << "Resenia: " << resenia << "\n";
	}
	
}
	

void mostrarLibros (string titulo, string autor, string resenia) {
		cout << "La informacion que usted ingreso del libro es: " << "\n";
		cout << "Titulo: " << titulo << "\n";
		cout << "Autor: " << autor << "\n";
		cout << "Resenia: " << resenia << "\n";
}
void mostrarCanciones (string titulo, string autor, string interprete, int cantidadReproducciones, string resenia){
	int eleccion; 
	cout << "¿Como quiere ver los datos?" << "\n" <<  "1. Toda la informacion. " << "\n" << "2. Por la cantidad de reproducciones en Spotify. ";
	cin >> eleccion;
	if (eleccion == 1){
		cout << "Titulo: "<< titulo << "\n";
		cout << "Autor: " << autor << "\n";
		cout << "Interprete: "<< interprete<< "\n";
		cout << "Cantidad de reproducciones en Spotify: " << cantidadReproducciones << "\n";
		cout << "Resenia: " << resenia << "\n";
	}
	
	else if (eleccion == 2 and cantidadReproducciones > 100){
		cout << "Titulo: "<< titulo << "\n";
		cout << "Cantidad de reproducciones en Spotify: " << cantidadReproducciones << "\n";
	}
	else {
		cout << "No se puede mostrar la informacion porque la cancion no tiene las suficientes reproducciones en Spotify! " << "\n" << "Intentelo nuevamente...";
	}
}

	
	/*
	
	Este Proyecto decidí realizarlo creando tres Class (clases) con los respectivos nombres que decía la consigna (Libros, Películas y Canciones). Dentro de cada una de estas clases establecí los parámetros necesarios, con sus respectivos tipos de datos. 
	Class Libros:
	-	string titulo
	-	string autor
	-	string resenia
	Class Peliculas:
	-	string titulo
	-	string autor
	-	string protagonista
	-	int anio
	-	int porcentajeCriticas
	-	string resenia
	Class Canciones 
	-	string titulo
	-	string autor;
	-	string interprete
	-	int cantidadReproducciones
	-	string resenia
	
	Luego de crear las clases pasamos a la definición de las funciones (que en este caso son todas void, ya que no nos tienen que retornar ningún valor) que nos mostraran en la consola todos los datos ingresados 
	de la manera en que el usuario quiera. Luego de esto, en el main decidí crear un "if" en el cual dependiendo de que opción seleccione el usuario, es el campo que luego tendrá que rellenar con sus respectivos datos. 
	Una vez seleccionada la opción (1 -Libros, 2 - Películas, 3 - Canciones) entramos en todo el funcionamiento lógico del programa. Todas las opciones funcionan de la misma manera; comienzan con un mensaje que les pide
	que introduzcan la cantidad de instancias que quieren que se generen (por ejemplo: cuantos libros desea ingresar), a partir de esto, el programa comenzara a funcionar en base a la cantidad ingresada anteriormente, por lo 
	que, si introdujo un valor de 2, deberá llenar 2 veces los campos que se presenten en pantalla (por eso el for loop se setea i < cantidad). Para mostrar los datos con la función mostrar<Nombre>, ponemos la instancia en 
	posición[i] mas el atributo que queremos que imprima por pantalla, y gracias a que la hemos declarado antes, nuestro programa ya estaría listo para ser utilizado. 
	En cuanto a la visualización de los datos, tanto la Class Películas y Canciones, podemos verlas de distintas maneras. Películas -> Por el año de lanzamiento o por toda la información. Canciones -> Por la cantidad de 
	reproducciones (que para este Proyecto las setee en 100) si estas son mayores a las definidas o por toda la información completa.
	

	*/
