#include<bits/stdc++.h>



struct usuario{
    int identificador;
    int periodo;

    bool operator() (const usuario& p1,const usuario& p2) {
        if(p1.periodo > p2.periodo){
            return true;
        }else if(p1.periodo < p2.periodo){
            return false;
        }
        else if(p1.identificador > p2.identificador){
            return true;
        }
        return false;
    }
};

bool funcion(){
    int numero;
    std::cin>>numero;
    if(!numero){
        return false;
    }
    std::priority_queue<usuario,std::vector<usuario>,usuario> lista;
    std::map<int,int> dicionario;
    for(int i = 0; i<numero;i++){
        int identificador,periodo;
        std::cin>> identificador >> periodo;
        usuario persona;
        persona.identificador = identificador;
        persona.periodo = periodo;
        lista.push(persona);
        dicionario[identificador] = periodo;
    }
    int repetir;
    std::cin>>repetir;
    for(int i =0; i<repetir;i++){
        std::cout << lista.top().identificador << "\n";
        int nuevo_periodo = (lista.top().periodo)+dicionario[lista.top().identificador];
        int identificador_nuevo = lista.top().identificador;
        lista.pop();
        usuario persona_nueva;
        persona_nueva.identificador = identificador_nuevo;
        persona_nueva.periodo = nuevo_periodo;
        lista.push(persona_nueva);
    }

    std::cout << "---\n";
    return true;
}

int main(){
std::ios_base::sync_with_stdio(false);
std::cin.tie(nullptr);
    while(true){
        if(!funcion()){
            break;
        }
    }
    return 0;
}