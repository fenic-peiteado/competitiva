#include <bits/stdc++.h>

void function(std::string aux) {
  if (aux.size() == 0) {
    printf("SI\n");
    return;
  }
  std::stack<char> pila;
  for (auto i : aux) {
    if (i == '[' || i == '(' || i == '{') {
      pila.push(i);
    } else if (i == ')' || i == ']' || i == '}') {
      char aux;
      if (i == ')') {
        aux = '(';
      } else if (i == ']') {
        aux = '[';
      } else if (i == '}') {
        aux = '{';
      }
      if (pila.empty()) {
        printf("NO\n");
        return;
      }
      if (aux != pila.top()) {
        printf("NO\n");
        return;
      }
      pila.pop();
    }
  }
  if (pila.empty()) {
    printf("SI\n");
    return;
  } else {
    printf("NO\n");
    return;
  }
}

int main() {
  std::string aux;
  while (std::getline(std::cin, aux)) {
    function(aux);
  }

  return 0;
}