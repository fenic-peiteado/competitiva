#include <bits/stdc++.h>

std::string funcion_aux(std::string param) {
  std::list<char> line;

  auto actual = line.begin();
  for (auto i : param) {
    if (i == '-') {
      actual = line.begin();
    } else if (i == '+') {
      actual = line.end();
    } else if (i == '*') {
      if (actual != line.end()) {
        actual++;
      }
    } else if (i == '3') {
      if (!line.empty()) {
        if(actual == line.end()){
        actual--;
        }
        actual = line.erase(actual);
      }
    } else {
         actual = line.insert(actual, i);
         actual++;
    }
  }
  std::string salida;
  for (auto i : line) {
    if (i != '-' && i != '3' && i != '+' && i != '*') salida.push_back(i);
  }
  return salida;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
std::cout.tie(nullptr);
  std::string aux;
  while (std::getline(std::cin, aux)) {
    std::cout << funcion_aux(aux) << "\n";
  }

  return 0;
}