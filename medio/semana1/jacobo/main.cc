#include<bits/stdc++.h>


std::string funcion_aux(std::string param){
    std::deque<char> line;
    for(auto i: param){
        line.push_back(i);
    }
    auto actual = line.begin();
    for(auto i :param){
        if(i == '-'){
            actual = line.begin();
        }else if( i == '+'){
            actual = line.end();
            actual--;
        }else if( i == '*'){
            if(actual != line.end()){
                actual++;
            }
        }else if(i == '3'){
            auto aux = actual;
            aux++;
            line.erase(actual);
            actual = aux;
        }
    }
    std::string salida;
    for(auto i:line){
        if(i != '-' && i != '3' && i != '+' && i != '*')
        salida.push_back(i);
    }
    return salida;
}

int main(){

    std::string aux;
    while(std::getline(std::cin,aux)){
        std::cout << funcion_aux(aux)  << "\n";
    }

    return 0;
}