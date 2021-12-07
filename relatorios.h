
int menuRelatorios(){

    int op = 0;

    puts("");
    puts("***************");
    puts("Listagem de relatorios");
    puts("");

    while (op != 9){
        printf("\n 1 - Listar Voluntario");
        printf("\n 2 - Listar Medicos");
        printf("\n 3 - Listar Medalhas");
        printf("\n 4 - Listar Atletas");
        printf("\n 5 - Listar Funcionario");
        printf("\n 6 - Listar Agenda de Treinos");
        printf("\n 7 - Listar Jogo");
        printf("\n 8 - Listar Pais");
        printf("\n 9 - SAIR");
        //printf("\n 10 - Alterar dados funcionarios");

        printf("\nOpcao: ");
        scanf("%d%*c", &op);

        switch(op){

            case 1:
                printf("\n**********RELATORIO DE VOLUNTARIOS*********\n");
                listarVoluntario();
                break;
            case 2:
                printf("\n************RELATORIO DE MEDICOS***********\n");
                listarMedicos();
                break;
            case 3:
                printf("\n***********RELATORIO DE MEDALHAS***********\n");
                listarMedalhas();
                break;
            case 4:
                printf("\n************RELATORIO DE ATLETAS***********\n");
                listarAtletas();
                break;
            case 5:
                printf("\n*********RELATORIO DE FUNCIONARIOS*********\n");
                listarFuncionario();
                break;
            case 6:
                printf("\n*************RELATORIO DE AGENDA***********\n");
                listaragendaTreinos();
                break;
            case 7:
                printf("\n***********RELATORIO DE CALENDARIO*********\n");
                listaJogos();
                break;
            case 8:
                printf("\n*************RELATORIO DE PAISES***********\n");
                listaPaises();
                break;
            case 9:
                break;
            //case 10:
            //    menuAlteracoesFuncionarios();
            //    break;
            //Ainda nao esta pronto
            default:
                printf("\n Opcao invalida!\n");
        }
    }

    return 0;

}


void listarVoluntario(){

  FILE*fp=fopen("Bdvoluntarios.txt","rb");

  int x=99, c, cont=0;
  struct voluntario vol[x];

  while ((c=getc(fp))!=EOF){

    fseek(fp,cont*sizeof(struct voluntario),SEEK_SET);
    fread(&vol[cont],sizeof(struct voluntario),1,fp);

    printf("Nome:%s\n",vol[cont].voluntario.nome);
    printf("Data de nascimento:%d/%d/%d\n",vol[cont].voluntario.dia,vol[cont].voluntario.mes,vol[cont].voluntario.ano);
    printf("Sexo:%c\n",vol[cont].voluntario.sexo);
    printf("Documento:%s\n",vol[cont].voluntario.documento);

    printf("\**** Endereco ****\n");

    printf("Rua:%s\n",vol[cont].endereco.rua);
    printf("Numero:%d\n",vol[cont].endereco.numero);
    printf("Complemento:%s\n",vol[cont].endereco.complemento);
    printf("Bairro:%s\n",vol[cont].endereco.bairro);
    printf("Cidade:%s\n",vol[cont].endereco.cidade);
    printf("Estado:%s\n",vol[cont].endereco.estado);
    printf("Pais:%s\n",vol[cont].endereco.pais);

    printf("Cargo:%s\n",vol[cont].funcao);
    printf("Local de trabalho:%s\n",vol[cont].localAtuacao);

    cont++;

  }

  fclose(fp);

}

void listarMedicos(){
  FILE*fp=fopen("Bdmedicos.txt","rb");
  int x=99, c, cont=0;
  struct medicos med[x];
  while ((c=getc(fp))!=EOF){
    fseek(fp,cont*sizeof(struct medicos),SEEK_SET);
    fread(&med[cont],sizeof(struct medicos),1,fp);
    printf("\n*Listagem de Medicos*\n");
    printf("\n");
    printf("Nome:%s\n",med[cont].medicos.nome);
    printf("Data de nascimento:%d/%d/%d\n",med[cont].medicos.dia,med[cont].medicos.mes,med[cont].medicos.ano);
    printf("Sexo:%c\n",med[cont].medicos.sexo);
    printf("Documento:%s\n",med[cont].medicos.documento);

    printf("\nEndereco\n");
    printf("Rua:%s\n",med[cont].endereco.rua);
    printf("Numero:%d\n",med[cont].endereco.numero);
    printf("Complemento:%s\n",med[cont].endereco.complemento);
    printf("Bairro:%s\n",med[cont].endereco.bairro);
    printf("Cidade:%s\n",med[cont].endereco.cidade);
    printf("Estado:%s\n",med[cont].endereco.estado);
    printf("Pais:%s\n",med[cont].endereco.pais);

    printf("Especializacao:%s\n",med[cont].especializacao);
    printf("Equipe:%s\n",med[cont].equipe);
    printf("\n");
    cont++;
  }
  fclose(fp);
}

void listarMedalhas(){
  FILE*fp = fopen("BdMedalhas.txt","rb");
  int x=99,c,cont=0;
  struct medalhas medal[x];
  while ((c=getc(fp))!=EOF){
    fseek(fp,cont*sizeof(struct medalhas),SEEK_SET);
    fread(&medal[cont],sizeof(struct medalhas),1,fp);

    //printf("\n");
    //printf("Entre com a categoria da medalha(ouro, prata, bronze):%s\n",medal[cont]);
    //printf("Quantidade de medalhas:%d\n",medal[cont].quantMedalhas);
    cont++;
  }
  fclose(fp);
}

void listarAtletas(){

  FILE*fp = fopen("Bdatletas.txt","rb");

  int x=99 , c, cont=0;

  struct atletas atlet[x];

  while ((c=getc(fp))!=EOF){

    fseek(fp,cont*sizeof(struct atletas),SEEK_SET);

    fread(&atlet[cont],sizeof(struct atletas),1,fp);

    printf("\n*Listagem de Atletas*\n");
    printf("\n");

    printf("Nome:%s\n",atlet[cont].profissional.nome);
    printf("Data de nascimento:%d/%d/%d\n",atlet[cont].profissional.dia,atlet[cont].profissional.mes,atlet[cont].profissional.ano);
    printf("Sexo:%c\n",atlet[cont].profissional.sexo);
    printf("Peso:%.2f\n",atlet[cont].peso);
    printf("Altura:%.2f\n",atlet[cont].altura);
    printf("Documento:%s\n",atlet[cont].profissional.documento);

    printf("Endereco\n");
    printf("Rua:%s\n",atlet[cont].endereco.rua);
    printf("Numero:%d\n",atlet[cont].endereco.numero);
    printf("Complemento:%s\n",atlet[cont].endereco.complemento);
    printf("Bairro:%s\n",atlet[cont].endereco.bairro);
    printf("Cidade:%s\n",atlet[cont].endereco.cidade);
    printf("Estado:%s\n",atlet[cont].endereco.estado);
    printf("Pais:%s\n",atlet[cont].endereco.pais);

    printf("Modalidade:%s\n",atlet[cont].modalidade);
    printf("Alojamento:%s\n",atlet[cont].alojamento);
    cont++;
  }
  fclose(fp);
}

void listarFuncionario(){

    FILE*fp = fopen("Bdfuncionario.txt","rb");

    int x=99, c, cont=0;
    struct funcionario funci[x];

    while ((c=getc(fp))!=EOF){
        fseek(fp,cont*sizeof(struct funcionario),SEEK_SET);
        fread(&funci[cont],sizeof(struct funcionario),1,fp);

        printf("Nome:%s\n",funci[cont].func.nome);
        printf("Data de nascimento:%d/%d/%d\n",funci[cont].func.dia,funci[cont].func.mes,funci[cont].func.ano);
        printf("Sexo:%c\n",funci[cont].func.sexo);
        printf("Documento:%s\n",funci[cont].func.documento);

        printf("Endereco\n");
        printf("Rua:%s\n",funci[cont].endereco.rua);
        printf("Numero:%d\n",funci[cont].endereco.numero);
        printf("Complemento:%s\n",funci[cont].endereco.complemento);
        printf("Bairro:%s\n",funci[cont].endereco.bairro);
        printf("Cidade:%s\n",funci[cont].endereco.cidade);
        printf("Estado:%s\n",funci[cont].endereco.estado);
        printf("Pais:%s\n",funci[cont].endereco.pais);

        printf("Salario:%f\n",funci[cont].salario);
        printf("Funcao:%s\n",funci[cont].funcao);
        printf("Local de atuacao:%s\n",funci[cont].localAtuacao);

        cont++;

  }

  fclose(fp);

}

void listaragendaTreinos(){
  FILE*fp = fopen("BdagendaTreinos.txt","rb");
  int x=99, c, cont=0;
  struct agendaTreinos atreino[x];
  while ((c=getc(fp))!=EOF){
    fseek(fp,cont*sizeof(struct agendaTreinos),SEEK_SET);
    fread(&atreino[cont],sizeof(struct agendaTreinos),1,fp);
    printf("\n*Listagem da agenda de treinos*\n");
    printf("\n");
    printf("Pais da equipe:%s\n",atreino[cont].paisEquipe);
    printf("Dia do treino:%d/%d/%d\n",atreino[cont].dia,atreino[cont].mes,atreino[cont].ano);
    printf("Local do treino:%s\n",atreino[cont].localTreino);
    printf("Modalidade:%s\n",atreino[cont].modalidade);
    cont++;
  }
    fclose(fp);
}

void listaJogos(){

    FILE *fp;

    fp = fopen("bdCalendario.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo");
    }

    struct jogo sjogo[MAX];
    char c;
    int cont=0;

    while ((c=getc(fp))!=EOF){
        fseek(fp,cont*sizeof(struct jogo),SEEK_SET);
        fread(&sjogo[cont],sizeof(struct jogo),1,fp);

        printf("Local: %s\n", sjogo[cont].local);
        printf("Hora: %d:%d\n", sjogo[cont].hora, sjogo[cont].minuto);
        printf("Dia: %d/%d/%d\n", sjogo[cont].dia, sjogo[cont].mes, sjogo[cont].ano);
        printf("Modalidade: %s\n", sjogo[cont].modalidade);
        printf("Confronto: %s x %s\n", sjogo[cont].rival_1, sjogo[cont].rival_2);

        cont++;
    }

    fclose(fp);

}

void listaPaises(){

    FILE *fp;

    fp = fopen("bdPais.txt", "rb");
    if(fp == NULL){
        printf("Erro ao abrir arquivo");
    }

    struct pais spais[NUMPAIS];
    int cont=0;
    char c;

    while ((c=getc(fp))!=EOF){
        fseek(fp,cont*sizeof(struct pais),SEEK_SET);
        fread(&spais[cont],sizeof(struct pais),1,fp);

        printf("Nome: %s\n", spais[cont].nome);
        printf("Ouro: %d\n", spais[cont].ouro);
        printf("Prata: %d\n", spais[cont].prata);
        printf("Bronze: %d\n", spais[cont].bronze);

        cont++;
    }

    fclose(fp);

}
