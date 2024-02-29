#include <iostream>

int main()
{
    int ano;
    
    /*Solicita ao usuário a variável que será utilizada*/
    std::cout<<"Digite o ano: ";
    std::cin>>ano;
    
    /*Avalia o ano e retorna se é bissexto ou não*/
    if (((ano%4 == 0) && (ano%100 != 0)) || (ano%400 == 0))
    {
        std::cout<<"Ano bissexto";
    }
    else
    {
        std::cout<<"Ano não é bissexto";
    }

    return 0;
}