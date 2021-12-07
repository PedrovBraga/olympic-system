
int menu()
{
    int op;


    do
    {

        puts("\n*********************************************");
        puts("\nMENU INICIAL\n");

        puts("O que deseja fazer?\n");
        printf(" 1 - Cadastros\n");
        printf(" 2 - Visualizar Relatorios\n");
        printf(" 3 - Protocolos COVID-19\n");
        printf(" 4 - Sair\n");

        printf("\nOpcao: ");
        scanf("%d%*c", &op);


        switch(op)
        {
            case 1:
                menuCadastros();
            break;

            case 2:
                menuRelatorios();
            break;

            case 3:
                protocoloCovid();
                break;

            case 4:
                op = -1;//quebra condição do while e sai
                break;

            default:
                puts("Insere um válido !\n");
            break;
        }

    } while(op > 0);

    return 0;
}


void login(struct usuarios_infos usuario_cadastrado)
{
    FILE *logs;

    struct usuarios_infos *lista_de_contas;

    int total_contas = 0, arq_tamanho = 0, i;

        printf("\n***********************************************\n");
        printf("\nTELA DE LOGIN\n\n");
        memset(&usuario_cadastrado, 0, sizeof(struct usuarios_infos));
        printf("USUARIO: ");
        scanf("%s", usuario_cadastrado.login);
        printf("SENHA: ");
        scanf("%s", usuario_cadastrado.senha);

        logs = fopen ("contas.db","rb");
        if(logs == NULL)
        {
            printf("\nErro ao tentar abrir o arquivo.\n\n");
        }
        else
        {
            fseek(logs,0,SEEK_END);
            arq_tamanho = ftell(logs);
            total_contas = arq_tamanho / sizeof (struct usuarios_infos);
            rewind(logs);
            lista_de_contas = malloc(arq_tamanho);
            if(fread(lista_de_contas, sizeof (usuario_cadastrado), total_contas, logs) != total_contas)
            {
                printf("Falha ao tentar ler contas\n");
                fclose(logs);
                free(lista_de_contas);
                return;
            }
            fclose(logs);
            for (i=0; i<total_contas; i++){
                if(memcmp(&usuario_cadastrado, &lista_de_contas[i], sizeof(struct usuarios_infos)) == 0)
                {
                    printf("\nLOGADO COM SUCESSO\n");
                    menu();
                    break;
                }
                if(i == total_contas-1)
                {
                    printf("\n\nNEGADO\n");
                }
            }
            free(lista_de_contas);
        }

}
