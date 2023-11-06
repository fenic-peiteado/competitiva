#include<bits/stdc++.h>

typedef std::vector<std::pair<int,int>> vp;
typedef std::pair<int,int> pp;
typedef std::vector<int> vi;
int funcion(int caja,int cliente){
    std::priority_queue<std::pair<int,int>,vp,std::greater<pp>> caja_dispo;
    int valor;
    vi lista;
    for(int i = 1; i <= cliente;i++){
        std::cin>>valor;
        lista.push_back(valor);
        //fila_ordenada.push(std::make_pair(i,valor));
    }
    //Primera iteracion con caja vacia
    //N*log(n)
    for(int i = 1; i <= (int)caja; i++) {
        //Si resulta que hay mas caja que cliente le toca la siguiente
        if(i-1 >= lista.size()){
            return i;
        }
        caja_dispo.push(std::make_pair(lista[i-1],i));
    }

    int i = caja;
  //  vp iguales;
  //  iguales.reserve(caja);
    pp actual;
    //Buscamo la caja libres mientra tengamos clientes
    //nlog(n);
    while( i < lista.size()){
        //Caja libre en el mismo momento
        //iguales.push_back(caja_dispo.top());
        actual = caja_dispo.top();
        caja_dispo.pop();
        //while(caja_dispo.top().first == iguales.begin()->first){
        //    iguales.push_back(caja_dispo.top());
        //    caja_dispo.pop();
       // }
        //Calcula los siguiente clientes con las cajas libres
        //for(auto &x : iguales){
         //   x.first = x.first + lista[i];
            actual.first = actual.first + lista[i];
            caja_dispo.push(actual);
            i++;
            //si superamos el cliente disponble implica que le toca al sujeto
            //if(i >= lista.size()){
            //    return caja_dispo.top().second;
            //}
       // }
       // iguales.clear();
    } 
    //caso por defecto salir con la caja siguiente
    return caja_dispo.top().second;
}
int main(){

    int caja,cliente;
    while(std::cin >> caja >> cliente && caja + cliente != 0){
       std::cout <<  funcion(caja,cliente) << "\n";
    }
    


    return 0;
}