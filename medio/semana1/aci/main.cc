#include <bits/stdc++.h>

void funcionprueba(int n) {
  std::deque<std::pair<int, std::string>> lista;
  int max = -1;
  for (int i = 0; i < n; i++) {
    int valor;
    std::string accidente;
    std::cin >> accidente >> valor;
    if (valor > max) {
      max = valor;
    }
    while (!lista.empty() && lista.back().first < valor) {
      lista.pop_back();
    }
    while (!lista.empty() && lista.front().first < valor) {
      lista.pop_front();
    }
    lista.push_back(std::make_pair(valor, accidente));
    bool encontrado = true;
    for (auto x = lista.rbegin(); x != lista.rend(); x++) {
      if (x->first > valor) {
        encontrado = false;
        std::cout << x->second << "\n";
        break;
      }
    }
    if (encontrado) {
      printf("NO HAY\n");
    }
  }
  printf("---\n");
}

int main() {
  int caso;
  while (scanf("%d", &caso) != EOF) {
    funcionprueba(caso);
  }

  return 0;
}