#include <bits/stdc++.h>

void funcion(std::string line) {
  std::list<char> lista;
  auto actual = lista.end();
  for (auto i : line) {
    if (i == '-') {
      actual = lista.begin();
    } else if (i == '+') {
      actual = lista.end();
    } else if (i == '*') {
      if (actual != lista.end())
       actual++;
    } else if (i == '3') {
      if (actual != lista.end()) {
        actual =  lista.erase(actual);
      }
    } else {
        lista.insert(actual, i);
    }
  }
  for (auto i : lista) {
    std::cout << i;
  }
  std::cout << "\n";
}

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    funcion(line);
  }

  return 0;
}