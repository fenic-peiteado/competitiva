#include<bits/stdc++.h>


void function(int cajon, int invitados){
    std::vector<int> secuencia(cajon);
        int valor;
    for(int i = 0; i<cajon;i++){
        scanf("%d",&valor);
        secuencia[i] = valor;
    }
    std::pair<int,int> pos_valor;
    pos_valor.first = -1;
    pos_valor.second = -1;
    std::deque<std::pair<int,int>> ventana;
   // ventana.push_back(pos_valor);
    for(int i = 0;  i < invitados-1;i++){
        while (!ventana.empty() && ventana.back().second <= secuencia[i])
        {
            ventana.pop_back();
        }
            ventana.push_back(std::make_pair(i,secuencia[i]));
    }
    for(int i = invitados-1;i < (int)secuencia.size();i++){
        if(ventana.front().first < i-invitados+1){ //BUSCAR
        //se establece como valor el i
        ventana.pop_front();
        }
        while (!ventana.empty() && ventana.back().second <= secuencia[i])
        {
            ventana.pop_back();
        }
            ventana.push_back(std::make_pair(i,secuencia[i]));
            if(i+1 < (int)secuencia.size() ){
            printf("%d ",ventana.front().second);                       
            }else{
            printf("%d",ventana.front().second);                       
            }
    }
    printf("\n");    
}


int main(){

    int cajon, invitados;
    while(scanf("%d %d",&cajon ,&invitados) && cajon+invitados != 0){
        function(cajon,invitados);
    }

    return 0;
}