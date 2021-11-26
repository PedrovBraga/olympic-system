#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#include "cadastros.h"
#include "login.h"
#include "relatorios.h"
#include "protocolocovid.h"
#include "politicaeprivacidade.h"

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int op = 0;

    struct usuarios_infos usuario_cadastrado;


    FILE* logs;

    while (op != 4 ){
        printf("\n****BEM-VINDO AO SISTEMA PARIS 2024***\n");

        printf("\nCadastre-se caso seja seu primeiro acesso\n");

        RETORNAMENU:
        printf("\n 1 - Cadastrar nova conta");
        printf("\n 2 - Fazer login");
        printf("\n 3 - Politicas e termos de privacidade\n");
        printf(" 4 - Sair\n");

        printf("\nOpcao: ");
        scanf("%d%*c", &op);

        switch(op){
            case 1:
                cadUsuario(usuario_cadastrado);
                break;

            case 2:
                login(usuario_cadastrado);
                break;
            case 3:
                politicadePrivacidade();
                goto RETORNAMENU;
                break;
            case 4:
                break;

            default:
                printf("\n Opcao invalida!\n");
        }
        break;
    }

    return 0;
}
