#include <bits/stdc++.h>

struct Relacion {
  int instrumento;
  int partitura;
  Relacion() {
    instrumento = 1;
    partitura = 1;
  }
};
// Debe ordenar de mayor a menor por defecto lo ordena asi como less
bool operator<(Relacion a, Relacion b) {
  int procion_a =
      a.instrumento / a.partitura + (a.instrumento % a.partitura > 0);
  int procion_b =
      b.instrumento / b.partitura + (b.instrumento % b.partitura > 0);
  return procion_a < procion_b;
}

int funcion(int parti, int instru) {
  std::priority_queue<Relacion> proximo;
  int valor;
  Relacion instrumento_actual;
  for (int i = 0; i < instru; i++) {
    scanf("%d", &valor);
    instrumento_actual.instrumento = valor;
    instrumento_actual.partitura = 1;
    proximo.push(instrumento_actual);
  }
  int calcular = parti - instru;
  std::priority_queue<Relacion> proximo_copy = proximo;
  for (int i = 0; i < calcular; i++) {
    instrumento_actual = proximo.top();
    proximo.pop();
    instrumento_actual.partitura++;
    proximo.push(instrumento_actual);
  }
   
  auto [ins, par] = proximo.top();
  return ins / par + (ins % par > 0);
}

int main() {
  int parti, instru;

  while (scanf("%d %d", &parti, &instru) != EOF) {
    printf("%d\n", funcion(parti, instru));
  }

  return 0;
}