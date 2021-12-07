#include <string.h>
#include "structs.h"

#define MAX 2000
#define NUMPAIS 300

int menuCadastros()
{

    int op = 0;

    while (op != 9){

        puts("\n*********************************************");
        puts("\nMENU DE CADASTROS");

        printf("\n 1 - Cadastrar Voluntario");
        printf("\n 2 - Cadastrar Medicos");
        printf("\n 3 - Cadastrar Medalhas");
        printf("\n 4 - Cadastrar Atletas");
        printf("\n 5 - Cadastrar Funcionario");
        printf("\n 6 - Cadastrar Agenda de Treinos");
        printf("\n 7 - Cadastrar Jogo");
        printf("\n 8 - Cadastrar Pais");
        printf("\n 9 - SAIR");

        printf("\n\nOpcao: ");
        scanf("%d%*c", &op);


        switch(op){

            case 1:
                printf("\n**********CADASTRO DE VOLUNTARIOS**********\n");
                cadVoluntario();
                break;
            case 2:
                printf("\n************CADASTRO DE MÉDICOS************\n");
                cadMedicos();
                break;
            case 3:
                printf("\n************CADASTRO DE MEDALHAS***********\n");
                cadMedalhas();
                break;
            case 4:
                printf("\n************CADASTRO DE ATLETAS************\n");
                cadAtletas();
                break;
            case 5:
                printf("\n**********CADASTRO DE FUNCIONARIOS*********\n");
                cadFuncionario();
                break;
            case 6:
                printf("\n************CADASTRO DE TREINOS************\n");
                cadAgendaTreinos();
                break;
            case 7:
                printf("\n*************CADASTRO DE JOGOS*************\n");
                cadJogo();
                break;
            case 8:
                printf("\n*************CADASTRO DE PAIS**************\n");
                cadPais();
                break;
            case 9:
                break;

            default:
                printf("\n Opcao invalida!\n");
        }
    }

    return 0;

}

void cadVoluntario(){

      FILE*fp = fopen("Bdvoluntarios.txt","ab");

      if(fp == NULL){
        printf("\nErro ao tentar abrir o arquivo.\n\n");
      }

      struct voluntario vol[1];

      printf("Nome: ");
      fflush(stdin);
      gets(vol[0].voluntario.nome);

      printf("Data de nascimento (dd/mm/aaaa): ");
      scanf("%d/%d/%d",&vol[0].voluntario.dia,&vol[0].voluntario.mes,&vol[0].voluntario.ano);

      printf("Sexo (M/F): ");
      fflush(stdin);
      scanf("%c", &vol[0].voluntario.sexo);

      printf("Documento:");
      fflush(stdin);
      gets(vol[0].voluntario.documento);

      printf("\n**** Endereco ****\n");
      printf("Rua:");
      fflush(stdin);
      gets(vol[0].endereco.rua);

      printf("Numero: ");
      scanf("%d",&vol[0].endereco.numero);

      printf("Complemento: ");
      fflush(stdin);
      gets(vol[0].endereco.complemento);

      printf("Bairro: ");
      fflush(stdin);
      gets(vol[0].endereco.bairro);

      printf("Cidade: ");
      fflush(stdin);
      gets(vol[0].endereco.cidade);

      printf("Estado: ");
      fflush(stdin);
      gets(vol[0].endereco.estado);

      printf("Pais: ");
      fflush(stdin);
      gets(vol[0].endereco.pais);

      printf("Cargo: ");
      fflush(stdin);
      gets(vol[0].funcao);

      printf("Local de trabalho: ");
      fflush(stdin);
      gets(vol[0].localAtuacao);

      fwrite(&vol[0],sizeof(struct voluntario),1,fp);
      fclose(fp);
};

void cadMedicos(){

      FILE*fp = fopen("Bdmedicos.txt","ab");

      if(fp == NULL){
        printf("\nErro ao tentar abrir o arquivo.\n\n");
      }

      struct medicos med[1];

      printf("nome: ");
      fflush(stdin);
      gets(med[0].medicos.nome);

      printf("Data de nascimento (dd/mm/aaaa): ");
      scanf("%d/%d/%d",&med[0].medicos.dia,&med[0].medicos.mes,&med[0].medicos.ano);

      printf("Sexo (M/F): ");
      fflush(stdin);
      scanf("%c", &med[0].medicos.sexo);

      printf("Documento: ");
      fflush(stdin);
      gets(med[0].medicos.documento);

      printf("\**** Endereco ****\n");

      printf("Rua: ");
      fflush(stdin);
      gets(med[0].endereco.rua);

      printf("Numero: ");
      scanf("%d",&med[0].endereco.numero);
      gets(med[0].endereco.rua);

      printf("Complemento: ");
      fflush(stdin);
      gets(med[0].endereco.complemento);

      printf("Bairro: ");
      fflush(stdin);
      gets(med[0].endereco.bairro);

      printf("Cidade: ");
      fflush(stdin);
      gets(med[0].endereco.cidade);

      printf("Estado: ");
      fflush(stdin);
      gets(med[0].endereco.estado);

      printf("Pais: ");
      fflush(stdin);
      gets(med[0].endereco.pais);

      printf("Especializacao: ");
      fflush(stdin);
      gets(med[0].especializacao);

      printf("\nEquipe/Modalidade: ");
      gets(med[0].equipe);
      printf("\n");

      fwrite(&med[0],sizeof(struct medicos),1,fp);
      fclose(fp);
}

void cadMedalhas(){

    FILE*fp = fopen("BdMedalhas.txt","ab");

    if(fp == NULL){
        printf("\nErro ao tentar abrir o arquivo.\n\n");
    }

    int op, qtd;
    struct medalhas medal[1];

    printf("\nTipo da medalha cadastrada:\n\n");
    printf(" 1 - Ouro\n");
    printf(" 2 - Prata\n");
    printf(" 3 - Bronze\n");

    scanf("\nOpcao: %d", &op);

    if(op == 1){
        printf("Quantas medalhas de ouro? ");
        scanf("%d", &qtd);
        medal[0].ouro = medal[0].ouro + qtd;
    }

    if(op == 2){
        printf("Quantas medalhas de prata? ");
        scanf("%d", &qtd);
        medal[0].ouro = medal[0].prata + qtd;
    }

    if(op == 3){
        printf("Quantas medalhas de bronze? ");
        scanf("%d", &qtd);
        medal[0].ouro = medal[0].bronze + qtd;
    }

    fwrite(&medal[0],sizeof(struct medalhas),1,fp);
    fclose(fp);
}

void cadAtletas(){

    FILE*fp = fopen("Bdatletas.txt","ab");

    if(fp == NULL){
        printf("\nErro ao tentar abrir o arquivo.\n\n");
    }

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
    gets(atlet[0].alojamento);

    fwrite(&atlet[0],sizeof(struct atletas),1,fp);
    fclose(fp);
}

void cadFuncionario(){

    FILE*fp = fopen("Bdfuncionario.txt","ab");

    if(fp == NULL){
        printf("\nErro ao tentar abrir o arquivo.\n\n");
    }

    struct funcionario funci[1];

    printf("nome: ");
    fflush(stdin);
    gets(funci[0].func.nome);

    printf("Data de nascimento:");
    scanf("%d/%d/%d",&funci[0].func.dia,&funci[0].func.mes,&funci[0].func.ano);

    printf("Sexo (M/F): ");
    fflush(stdin);
    scanf("%c", &funci[0].func.sexo);

    printf("Documento: ");
    fflush(stdin);
    gets(funci[0].func.documento);

    printf("\n**** Endereco ****\n");

    printf("Rua: ");
    fflush(stdin);
    gets(funci[0].endereco.rua);

    printf("Numero: ");
    fflush(stdin);
    scanf("%d",&funci[0].endereco.numero);

    printf("Complemento: ");
    fflush(stdin);
    gets(funci[0].endereco.complemento);

    printf("Bairro: ");
    fflush(stdin);
    gets(funci[0].endereco.bairro);

    printf("Cidade: ");
    fflush(stdin);
    gets(funci[0].endereco.cidade);

    printf("Estado: ");
    fflush(stdin);
    gets(funci[0].endereco.estado);

    printf("Pais: ");
    fflush(stdin);
    gets(funci[0].endereco.pais);

    printf("Salario: ");
    fflush(stdin);
    scanf("%f", &funci[0].salario);

    printf("Funcao: ");
    fflush(stdin);
    gets(funci[0].funcao);

    printf("Local de Atuacao: ");
    fflush(stdin);
    gets(funci[0].localAtuacao);

    fwrite(&funci[0],sizeof(struct funcionario),1,fp);
    fclose(fp);

}

void cadAgendaTreinos(){

    FILE*fp = fopen("BdagendaTreinos.txt","ab");

    if(fp == NULL){
        printf("\nErro ao tentar abrir o arquivo.\n\n");
        return;
    }

    struct agendaTreinos atreino[1];

    printf("Pais: ");
    fflush(stdin);
    gets(atreino[0].paisEquipe);

    printf("Dia do treino (dd/mm/aaaa): ");
    fflush(stdin);
    scanf("%d/%d/%d",&atreino[0].dia,&atreino[0].mes,&atreino[0].ano);

    printf("Local do treino: ");
    fflush(stdin);
    gets(atreino[0].localTreino);

    printf("Modalidade: ");
    fflush(stdin);
    gets(atreino[0].modalidade);

    fwrite(&atreino[0],sizeof(struct agendaTreinos),1,fp);
    fclose(fp);

}

void cadJogo(){

    FILE *fp;

    fp = fopen("bdCalendario.txt", "ab");

    if(fp == NULL){
        printf("Erro ao criar o arquivo!");
        return;
    }

    struct jogo jog[1];

    fflush(stdin);

    printf("\nLocal: ");
    gets(jog[0].local);

    printf("Horario (hh:mm): ");
    scanf("%d:%d", &jog[0].hora, &jog[0].minuto);

    printf("Dia: ");
    scanf("%d/%d/%d", &jog[0].dia, &jog[0].mes, &jog[0].ano);

    printf("Modalidade: ");
    gets(jog[0].modalidade);

    printf("Rival 1: ");
    gets(jog[0].rival_1);

    printf("Rival 2: ");
    gets(jog[0].rival_2);

    printf("\n");

    fwrite(&jog[0],sizeof(struct jogo),1,fp);
    fclose(fp);

};

void cadPais(){

    struct pais pa[1];

    FILE *fp;

    fp = fopen("bdPais.txt", "ab");
    if(fp == NULL){
        printf("Erro ao criar o arquivo!");
        return;
    }

    fflush(stdin);

    printf("\nNome: ");
    gets(pa[0].nome);

    printf("Numero de medalhas de ouro: ");
    scanf("%d", &pa[0].ouro);

    printf("Numero de medalhas de prata: ");
    scanf("%d", &pa[0].prata);

    printf("Numero de medalhas de bronze: ");
    scanf("%d", &pa[0].bronze);

    fwrite(&pa[0],sizeof(struct pais),1,fp);
    fclose(fp);

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

        printf("\nSUCESSO!\n");
        printf("Entre novamente com o seu novo login!\n");
    }

}
