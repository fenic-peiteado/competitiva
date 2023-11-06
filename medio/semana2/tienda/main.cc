#include <bits/stdc++.h>
typedef std::deque<int> cola;
typedef std::map<int, int> libro;

//FALLO
// No estoy pasando el valor correcto para el map cuando actulizo la cola
//NO ESTA HECHO EL ALGORITMO

void funcion(int consulta, cola armario, libro libro_consulta) {
  char letra;
  int valor;
  for (int i = 0; i < consulta; i++) {
    scanf("%s", &letra);
    // Consulta p
    int pepe;
    switch (letra) {
      case 'P':
        // Encontrar el más cercacno;
        break;
      case 'D':
        scanf("%d", &valor);
        armario.push_back(valor);
        libro_consulta[valor] = libro_consulta[valor] + 1;
        break;
      case 'I':
        scanf("%d", &valor);
        armario.push_front(valor);
        libro_consulta[valor] = libro_consulta[valor] + 1;
        break;
      case 'i':
        // erase
        pepe = libro_consulta[armario.front()];
        valor = armario.front();
        libro_consulta[armario.front()] = pepe - 1;
        armario.pop_front();
        std::cout << "SE ACTUALIZO " << libro_consulta[valor] << " - "
                  << pepe << "\n";
        break;
      case 'd':
        pepe = libro_consulta[armario.back()];
        valor = armario.back();
        libro_consulta[armario.back()] = pepe - 1;
        armario.pop_back();
        std::cout << "SE ACTUALIZO " << libro_consulta[valor] << " - "
                  << pepe << "\n";
        break;

      default:
        std::cout << "HUBO FALLO \n";
        return;
    }
  }
  for (auto i : libro_consulta) {
    std::cout << i.first << " " << i.second << " - ";
  }
  std::cout << "\n";
}

int main() {
  int repetir;
  int size_elementos, aux, consulta;
  scanf("%d", &repetir);
  for (int i = 0; i < repetir; i++) {
    scanf("%d", &size_elementos);
    std::deque<int> armario;
    std::map<int, int> libro_consulta;
    for (int j = 0; j < size_elementos; j++) {
      scanf("%d", &aux);
      libro_consulta[aux] = libro_consulta[aux] + 1;
      armario.push_back(aux);
    }
    scanf("%d", &consulta);
    for (auto i : libro_consulta) {
      std::cout << i.first << " " << i.second << " - ";
    }
    std::cout << "\n";

    funcion(consulta, armario, libro_consulta);
  }
  return 0;
}