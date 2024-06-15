#include<iostream>
#include"Papeleria.cpp"

int main(int argc, char* argv[]){
	Articulo articulito;
	articulito.nombre = std::string("Goma de borrar");
	articulito.cantidad = 10;
	articulito.precio = 7.5;
	Papeleria papeleria;
	papeleria.nombre = std::string("Papelitos");
	papeleria.direccion = std::string("Av de Colores 50, colonia Tijeras");
	papeleria.articulos[49] = articulito;
	std::cout << "Hola" << std::endl;
	std::cout << "Acabamos de crear un artículo que se llama: " << papeleria.articulos[49].nombre << ", con una cantidad igual a " << papeleria.articulos[49].cantidad << " y un precio unitario de: " << papeleria.articulos[49].precio << " MXN, gracias por su atención y preferencia." << std::endl;
	return 0;
}
