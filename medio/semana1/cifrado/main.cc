#include<bits/stdc++.h>


std::string faseuno(std::string aux){
    std::string result = aux;
    int j = aux.size()-1;
    int x = 0;
    for(int i = 0; i < aux.size();i++){
        result[x] = aux[i];
        x++;
        i++;
        if(i < aux.size()){
        result[j] = aux[i];
        j--;
        }else{
            break;
        }
    }
    std::cout << result << "\n";
    return result;
}

std::string fasedos(std::string aux){
    for(int i = 0; i <aux.size();i++){
        int init = i;
        int fin = i;
        std::string inv;
        while((i<aux.size()) && ((aux[i] != 'a' && aux[i] != 'e' && aux[i] != 'i'&& aux[i] != 'o' && aux[i] != 'u'&& aux[i] != 'A' && aux[i] != 'E' && aux[i] != 'I' && aux[i] != 'O' && aux[i] != 'U')) ){
            fin++;
            inv+=aux[i];  
            i++;
       }
        if(std::abs(fin-init) >= 2){
            for(int j = init;j<fin;j++){
                aux[j] = inv[(fin-init)-1-(j-init)];
                            }            
            }
    }
    
    return aux;
}

int main(){
    std::string aux;
    while(std::getline(std::cin,aux)){
       std::string prueba = faseuno(aux);
       std::cout << fasedos(prueba) << "\n";
    }
    return 0;
}