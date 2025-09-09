/*



*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

// Inicializar el generador de números aleatorios
srand(time(0));

// Generamos los tres numeros aleatorios
int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;

    // Desplegamos al usuario los numeros aleatorios generados
    cout << "Números aleatorios generados: " << numeroAleatorio1 << ", " <<  numeroAleatorio2 << ", "<<  numeroAleatorio3 << endl;

        if (numeroAleatorio1 >= numeroAleatorio2 >= numeroAleatorio3)
        
            cout << "Orden descendiente: " << numeroAleatorio1 << " >= " << numeroAleatorio2 << " >= " << numeroAleatorio3 << endl;
        
        else if (numeroAleatorio1 >= numeroAleatorio3 >= numeroAleatorio2)
        
            cout << "Orden descendiente: " << numeroAleatorio1 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio2 << endl;

        else if (numeroAleatorio2 >= numeroAleatorio1 >= numeroAleatorio3)
            
            cout << "Orden descendiente: " << numeroAleatorio2 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio3 << endl;

        else if (numeroAleatorio2 >= numeroAleatorio3 >= numeroAleatorio1)

            cout << "Orden descendiente: " << numeroAleatorio2 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio1 << endl;

        else if (numeroAleatorio3 >= numeroAleatorio1 >= numeroAleatorio2)

            cout << "Orden descendiente: " << numeroAleatorio3 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio2 << endl;

        else

            cout << "Orden descendiente: " << numeroAleatorio3 << " >= " << numeroAleatorio2 << " >= " << numeroAleatorio1 << endl;

return 0;









}
