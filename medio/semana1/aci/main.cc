#include<bits/stdc++.h>


void funcionprueba(int n){
    std::vector<std::pair<int,std::string>> lista;
    
    const char* cadenaC ;
    for(int i = 0;i<n;i++){
        int valor;
        std::string accidente;
        std::cin>>accidente>>valor;
        lista.push_back(std::make_pair(valor,accidente));
        bool encontrado = true;
        for(auto x = lista.rbegin();x != lista.rend();x++ ){
            if(x->first>valor){
                cadenaC = x->second.c_str();
                printf("%s\n", cadenaC);
                encontrado = false;
                break;
            }
        }
        if(encontrado){
            printf("NO HAY\n");
        }
    }
    printf("---\n");
}

int main(){

    int caso ;
    while(scanf("%d",&caso) != EOF){
    funcionprueba(caso);
    }
    
    return 0;
}