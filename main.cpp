#include <iostream>
#include "Movie.h"

using namespace std;
bool next = false;
int main() {
    int aux;

    LinkedList<Movie> *linkFirst = new LinkedList<Movie>();

    linkFirst->addNodeLast("345678","Alicia en el pais de las Maravillas", "Drama", "+18" 2002, "Stiven Spielberg");
    linkFirst->addNodeLast("85467e","Alicia a través del espejo", "Drama", "+15" 2011, "Stiven Spielberg");
    linkFirst->addNodeLast("345678","Piratas del caribe", "Comedia, Drama", "+18" 2009, "Juanita Perez");
    linkFirst->addNodeLast("345678","Rapidos y Furioso 6", "Drama, carreras", "+18" 2017, "Joselito Mangano");


    do{
        cout<<"Bienvenido a su programa";
        cout<<"Eliga su opcion";
        cout<<"1. Crear Una pelicula";
        cout<<"2. Buscar una pelicula";
        cout<<"3. Mostrar pelicula";
        cout<<"4. Mostrar Movie (get Object)";
        cout<<"5. Salir \n";
        cin>> aux;

        switch (aux) {
            string ID;
            string title;
            string typeMovie;
            string classification;
            short year;
            string director;

            cout << "\n Crea una nueva pelicula \n\n";
            cout << "\n Ingrese ID\n";
            cin >> ID;
            cout << "\n Ingrese titulo de la pelicula\n";
            cin >> title;
            fflush(stdin);
            cout << "\n Ingrese el tipo de pelicula \n";
            cin >> typeMovie;
            cout << "\n Ingrese la clasificación\n";
            cin >> classification;
            cout << "\n Ingrese el año de produccioin de pelicula\n";
            cin >> year;
            cout << "\n Ingrese el director de la pelicula \n";
            cin >> director;

            Movie *movie = new Movie(ID,title,typeMovie, classification, year, director);

            int aux2;
            cout << "Ingrese el número para agregar el Mouse en la posición deseada\n";
            cout << "1. Al principio\n2. Al final\n3.Antes de\n4.Después de\n\n";
            cin >> aux2;
            switch (aux2) {
                case 1:
                    linkFirst->addNodeFirst(*movie);
                    break;
                case 2:
                    linkFirst->addNodeLast(*movie);
                    break;

                case 3: {
                    string information;
                    cout << "Ingrese el ID de la pelicula\n";
                    cin >> information;

                    Node <Movie> *findMovie = linkFirst->findNode(information);
                    linkFirst->addNodeBeforeTo(findMovie, *movie);
                }
                    break;

                case 4: {
                    string information;
                    cout << "Ingrese el Id de la pelicula\n";
                    cin >> information;

                    Node <Movie> *findMouse = linkFirst->findNode(information);
                    linkFirst->addNodeAfterTo(findMovie, *movie);
                }
                    break;
            }
            break;
        case 2: {
            string ID;
            cout << "Ingrese el ID de la pelicula\n";
            cin >> ID;
            Movie *findMovie = linkFirst->findInfo(ID);

            if (findMovie != NULL) {
                cout << "Hallado!\n";
                cout << *findMovie << endl;
            } else {
                cout << "No encontrado" << endl;
            }
        }
        break;

        case 3:{
            for (Movie movie : linkFirst->getLinkedList( ) ){
                cout<<movie<<endl;
            }
        }
        break;

        case 4:
            int index;
        cout<<"Ingresa la posicion de la pelicula\n";
        cin>> index;
        cout<<*linkFirst->getObject(index);
        break;

        case 5: {
            cout<<"Vuelva pronto"<<endl;
            next = true;
        }
        break;
    }
}while(next);
return 0;

