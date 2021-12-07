
int politicadePrivacidade(){


  FILE *fp;

    fp = fopen("politicaprivacidade.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo");
    }

    char ch[20];

    printf("\n********************************************************************************************\n\n");

    while(fgets(ch, 20, fp) != NULL){
        printf("%s", ch);
    }

    printf("\n********************************************************************************************\n");

    return 0;

}
