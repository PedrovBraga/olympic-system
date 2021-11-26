#include <string.h>
#include "structs.h"

#define MAX 2000
#define NUMPAIS 300

void BdCompeticao(){

    FILE*fp;

    if(!(fp = fopen("Bdatletas.txt","rb"))){
        fp = fopen("Bdatletas.txt.","ab");
        printf("Arquivo atletas criado com sucesso\n");
    }

    if(!(fp = fopen("Bdmodalidade.txt","rb"))){
        fp = fopen("Bdmodalidade.txt","ab");
        printf("Arquivo modelidade criado com sucesso\n");
    }

    if(!(fp = fopen("Bdcompeticao.txt","rb"))){
        fp = fopen("Bdcompeticao.txt","ab");
        printf("Arquivo competicao criado com sucesso\n");
    }
    if(!(fp = fopen("Bdmedicos.txt","rb"))){
        fp = fopen("Bdmedicos.txt","ab");
        printf("Arquivo medicos criado com sucesso\n");
    }
    if(!(fp = fopen("Bdfuncionarios.txt","rb"))){
        fp = fopen("Bdfuncionarios.txt","ab");
        printf("Arquivo funcionarios criado com sucesso\n");
    }
    if(!(fp = fopen("Bdvoluntatio.txt","rb"))){
        fp = fopen("Bdvoluntario.txt","ab");
        printf("Arquivo voluntarios criado com sucesso\n");
    }
    if(!(fp = fopen("Bdpais.txt","r"))){
        fp = fopen("Bdpais.txt","a");
        printf("Arquivo pais criado com sucesso\n");
    }
    if(!(fp = fopen("BdagendaTreinos.txt","rb"))){
        fp = fopen("BdagendaTreinos.txt","ab");
        printf("Arquivo pais criado com sucesso\n");
    }

fclose(fp);
}

int menuCadastros()
{

    int op = 0;

    while (op != 9){
        puts("");
        puts("*********************************************");
        puts("CADASTROS");
        puts("");

        printf("\n 1 - Cadastrar Voluntario");
        printf("\n 2 - Cadastrar Medicos");
        printf("\n 3 - Cadastrar Medalhas");
        printf("\n 4 - Cadastrar Atletas");
        printf("\n 5 - Cadastrar Funcionario");
        printf("\n 6 - Cadastrar Agenda de Treinos");
        printf("\n 7 - Cadastrar Jogo");
        printf("\n 8 - Cadastrar Pais");
        printf("\n 9 - SAIR");

        printf("\nOpcao: ");
        scanf("%d%*c", &op);

        switch(op){

            case 1:
                printf("\n*CADASTRO DE VOLUNTARIOS*\n");
                cadVoluntario();
                break;
            case 2:
                printf("\n*CADASTRO DE MEDICOS*\n");
                cadMedicos();
                break;
            case 3:
                printf("\n*CADASTRO DE MEDALHAS*\n");
                cadMedalhas();
                break;
            case 4:
                printf("\n*CADASTRO DE ATLETAS*\n");
                cadAtletas();
                break;
            case 5:
                printf("\n*CADASTRO DE FUNCIONARIOS*\n");
                cadFuncionario();
                break;
            case 6:
                printf("\n*CADASTRO DE TREINOS*\n");
                cadAgendaTreinos();
                break;
            case 7:
                printf("\n*CADASTRO DE JOGOS*\n");
                cadJogo();
                break;
            case 8:
                printf("\n*CADASTRO DE PAIS*\n");
                cadPais();
                break;
            case 9:
                break;

            default:
                printf("\n Opcao invalida!\n");
        }
    }
}


void cadVoluntario(){
      FILE*fp = fopen("Bdvoluntarios.txt","ab");
      printf("\n*Cadastro de Voluntarios\n");
      struct voluntario vol[1];
      printf("Nome:");
      fflush(stdin);
      gets(vol[0].voluntario.nome);
      printf("Data de nascimento:");
      scanf("%d%d%d",&vol[0].voluntario.dia,&vol[0].voluntario.mes,&vol[0].voluntario.ano);
      printf("Sexo:");
      scanf("%s",&vol[0].voluntario.sexo);
      printf("Documento:");
      fflush(stdin);
      gets(vol[0].voluntario.documento);

      printf("\n*Endereco*\n");
      printf("Rua:");
      fflush(stdin);
      gets(vol[0].endereco.rua);
      printf("Numero:");
      scanf("%d",&vol[0].endereco.numero);
      printf("Complemento:");
      fflush(stdin);
      gets(vol[0].endereco.complemento);
      printf("Bairro:");
      fflush(stdin);
      gets(vol[0].endereco.bairro);
      printf("Cidade:");
      fflush(stdin);
      gets(vol[0].endereco.cidade);
      printf("Estado:");
      fflush(stdin);
      gets(vol[0].endereco.estado);
      printf("Pais:");
      fflush(stdin);
      gets(vol[0].endereco.pais);

      printf("Cargo:");
      fflush(stdin);
      gets(vol[0].funcao);
      printf("Local de trabalho:");
      fflush(stdin);
      gets(vol[0].localAtuacao);

      fwrite(&vol[0],sizeof(struct voluntario),1,fp);
      fclose(fp);
};

void cadMedicos(){
      FILE*fp = fopen("Bdmedicos.txt","ab");
      struct medicos med[1];
       printf("\n*Cadastro de Medicos\n");
      printf("nome:");
      fflush(stdin);
      gets(med[0].medicos.nome);
      printf("Data de nascimento:");
      scanf("%d%d%d",&med[0].medicos.dia,&med[0].medicos.mes,&med[0].medicos.ano);
      printf("Sexo:");
      scanf("%s",&med[0].medicos.sexo);
      printf("Documento:");
      fflush(stdin);
      gets(med[0].medicos.documento);

      printf("\nEndereco\n");
      printf("Rua:");
      fflush(stdin);
      gets(&med[0].endereco.rua);
      printf("Numero:");
      scanf("%d",&med[0].endereco.numero);
      gets(med[0].endereco.rua);
      printf("Complemento:");
      fflush(stdin);
      gets(med[0].endereco.complemento);
      printf("Bairro:");
      fflush(stdin);
      gets(med[0].endereco.bairro);
      printf("Cidade:");
      fflush(stdin);
      gets(med[0].endereco.cidade);
      printf("Estado:");
      fflush(stdin);
      gets(med[0].endereco.estado);
      printf("Pais:");
      fflush(stdin);
      gets(med[0].endereco.pais);
      printf("Especializacao:");
      fflush(stdin);
      gets(med[0].especializacao);
      printf("\nEquipe");
      printf("Entre com a equipe:");
      gets(med[0].equipe);

      fwrite(&med[0],sizeof(struct medicos),1,fp);
      fclose(fp);
}


void cadMedalhas(){
  FILE*fp = fopen("Bdmedalhas.txt","ab");
  struct medalhas medal[1];
    printf("\n*Cadastro de Medalhas*\n");
    printf("Medalhas ouro prata e bronze:");
    fflush(stdin);
    gets(&medal[0]);
    printf("Quantidade de medalhas:");
    fflush(stdin);
    scanf("%d",&medal[0].quantMedalhas);

    fwrite(&medal[0],sizeof(struct medalhas),1,fp);
    fclose(fp);
}


void cadAtletas(){

      FILE*fp = fopen("Bdatletas.txt","ab");

      struct atletas atlet[1];

        printf("\n*Cadastro de Atletas*\n");
        printf("nome:");
        fflush(stdin);
        gets(atlet[0].profissional.nome);

        printf("Data de nascimento:");
        scanf("%d%d%d",&atlet[0].profissional.dia,&atlet[0].profissional.mes,&atlet[0].profissional.ano);

        printf("Sexo:");
        fflush(stdin);
        scanf("%s",&atlet[0].profissional.sexo);

        printf("Peso:");
        fflush(stdin);
        scanf("%f",&atlet[0].peso);

        printf("Altura:");
        fflush(stdin);
        scanf("%f",&atlet[0].altura);

        printf("Documento:");
        fflush(stdin);
        gets(atlet[0].profissional.documento);

        printf("\nEndereco\n");
        printf("Rua:");
        fflush(stdin);
        gets(atlet[0].endereco.rua);

        printf("Numero:");
        fflush(stdin);
        scanf("%d",&atlet[0].endereco.numero);

        printf("Complemento:");
        fflush(stdin);
        gets(atlet[0].endereco.complemento);

        printf("Bairro:");
        fflush(stdin);
        gets(atlet[0].endereco.bairro);

        printf("Cidade:");
        fflush(stdin);
        gets(atlet[0].endereco.cidade);

        printf("Estado:");
        fflush(stdin);
        gets(atlet[0].endereco.estado);

        printf("Pais:");
        fflush(stdin);
        gets(atlet[0].endereco.pais);

        printf("Modalidade:");
        fflush(stdin);
        gets(atlet[0].modalidade);

        printf("Alojamento:");
        scanf("%s",&atlet[0].alojamento);

        fwrite(&atlet[0],sizeof(struct atletas),1,fp);
        fclose(fp);
}

void cadFuncionario(){
    FILE*fp = fopen("Bdfuncionario.txt","ab");
    struct funcionario funci[1];
    printf("\n*Cadastro de Funcionarios*\n");
    printf("nome:");
    fflush(stdin);
    gets(funci[0].func.nome);
    printf("Data de nascimento:");
    scanf("%d%d%d",&funci[0].func.dia,&funci[0].func.mes,&funci[0].func.ano);
    printf("Sexo:");
    fflush(stdin);
    scanf("%s",&funci[0].func.sexo);
    printf("Documento:");
    fflush(stdin);
    gets(funci[0].func.documento);

    printf("\nEndereco\n");
    printf("Rua:");
    fflush(stdin);
    gets(funci[0].endereco.rua);
    printf("Numero:");
    fflush(stdin);
    scanf("%d",&funci[0].endereco.numero);
    printf("Complemento:");
    fflush(stdin);
    gets(funci[0].endereco.complemento);
    printf("Bairro:");
    fflush(stdin);
    gets(funci[0].endereco.bairro);
    printf("Cidade:");
    fflush(stdin);
    gets(funci[0].endereco.cidade);
    printf("Estado:");
    fflush(stdin);
    gets(funci[0].endereco.estado);
    printf("Pais:");
    fflush(stdin);
    gets(funci[0].endereco.pais);

    printf("Salario:");
    fflush(stdin);
    scanf("%f",&funci[0].salario);
    printf("Funcao:");
    fflush(stdin);
    gets(funci[0].funcao);
    printf("Local de Atuacao:");
    fflush(stdin);
    gets(funci[0].localAtuacao);

    fwrite(&funci[0],sizeof(struct funcionario),1,fp);
    fclose(fp);

}

void cadAgendaTreinos(){
    FILE*fp = fopen("BdagendaTreinos.txt","ab");
    struct agendaTreinos atreino[1];
    printf("\n*Cadastro da Agenda de Treinos*\n");
    printf("Pais da equipe:");
    fflush(stdin);
    gets(atreino[0].paisEquipe);
    printf("Dia do treino:");
    fflush(stdin);
    scanf("%d%d%d",&atreino[0].dia,&atreino[0].mes,&atreino[0].ano);
    printf("Local do treino:");
    fflush(stdin);
    gets(atreino[0].localTreino);
    printf("Modalidade:");
    fflush(stdin);
    gets(atreino[0].modalidade);

    fwrite(&atreino[0],sizeof(struct agendaTreinos),1,fp);
    fclose(fp);

}

void cadJogo(){

    char local[30];
    char hora[5];//15:30 (pra colocar ":" precisa ser char)
    char dia[10]; //precisa ser char pra colocar "/". Ex. 20/06/21
    char modalidade[30];
    char rival_1[30], rival_2[30];
    char ch;

    FILE *fp;

    fp = fopen("bdCalendario.txt", "a");

        if(fp == NULL){
            printf("Erro ao criar o arquivo!");
            return 1;
        }

        fflush(stdin);

        printf("\nEscreva o local do jogo: ");
        gets(local);
        if(strlen(local) <8){
            fprintf(fp, "%s\t\t", local);
        } else fprintf(fp, "%s\t", local);

        printf("Escreva o horario do jogo: ");
        gets(hora);
        fprintf(fp, "%s\t", hora);

        printf("Escreva o dia do jogo: ");
        gets(dia);
        fprintf(fp, "%s\t", dia);

        printf("Escreva a modalidade do jogo: ");
        gets(modalidade);
        if(strlen(modalidade) <8){
            fprintf(fp, "%s\t\t", modalidade);
        } else fprintf(fp, "%s\t", modalidade);
        printf("Escreva quem eh o rival 1: ");
        gets(rival_1);

        printf("Escreva quem eh o rival 2: ");
        gets(rival_2);

        fprintf(fp, "%s", rival_1);
        fputs(" x ", fp);
        fprintf(fp, "%s\n", rival_2);

    printf("\n");

    return 0;

};


void cadPais(){

    char nome[40];
    char ouro[3], prata[3], bronze[3];
    char ch;

    FILE *fp;

    fp = fopen("bdPais.txt", "a");
    if(fp == NULL){
        printf("Erro ao criar o arquivo!");
        return 1;
    }

    fflush(stdin);

    printf("\nNome do pais: ");
    gets(nome);
    if(strlen(nome) < 8){
        fprintf(fp, "%s\t\t", nome);
    } else fprintf(fp, "%s\t", nome);

    printf("Numero de medalhas de ouro: ");
    gets(ouro);
    fprintf(fp, "%s\t", ouro);

    printf("Numero de medalhas de prata: ");
    gets(prata);
    fprintf(fp, "%s\t", prata);

    printf("Numero de medalhas de bronze: ");
    gets(bronze);
    fprintf(fp, "%s\n", bronze);

    return 0;

}

void cadUsuario(struct usuarios_infos usuario_cadastrado){

            FILE *logs;

            printf("\n****CADASTRO DE USUARIO****\n");
            logs = fopen ("contas.db","ab");
            if(logs == NULL)
            {
                printf("\nErro ao tentar abrir o arquivo.\n\n");
            }
            else
            {
                memset(&usuario_cadastrado,0,sizeof(struct usuarios_infos));
                printf("Cadastrar usuario: ");
                scanf("%s", usuario_cadastrado.login);
                printf("Cadastrar senha: ");
                scanf("%s", usuario_cadastrado.senha);
                fwrite(&usuario_cadastrado, sizeof usuario_cadastrado, 1, logs);
                fclose(logs);
            }

}
