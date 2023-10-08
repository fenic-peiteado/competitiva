#include<bits/stdc++.h>


std::string fase1(std::string &aux){
    std::string result = aux;
    for(int i = 0; i < aux.size();i++){
        result[i] = aux[i];
    }
}

std::string fase2(std::string &aux){

}

int main(){
    std::string aux;
    while(std::getline(std::cin,aux)){
        fase1(aux);
    }
    return;
}