#include<bits/stdc++.h>

void funcion(int n){
    std::map<std::string,int> lista;
    std::string nombre;
    std::string valor;
    for(int i = 0;  i< n;i++){
        std::getline(std::cin,nombre);
        std::getline(std::cin,valor);
        //buscar en map el nombre y sumar el valor
        if(valor == "INCORRECTO"){
            lista[nombre] = lista[nombre] - 1;
        }else{
            lista[nombre] = lista[nombre] + 1;
        }
    }
    for(auto i : lista){
        if(i.second != 0)
        std::cout<< i.first << ", " << i.second << "\n";
    }
    std::cout << "---\n";
}



int main(){
    std::string linea;
    while(std::getline(std::cin,linea)){
        int numero = std::stoi(linea);
        if(numero ==0) break;
        funcion(numero);
    }
    return 0;
}


