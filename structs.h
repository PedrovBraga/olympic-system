
struct pessoa
{
    char nome[30];
    int dia, mes, ano;
    char sexo;
    char documento[30];
};

struct endereco_
{
    char rua[30];
    int numero;
    char complemento[25];
    char bairro[30];
    char cidade[30];
    char estado[25];
    char pais[15];
};

struct atletas
{
    struct pessoa profissional;
    struct endereco_ endereco;
    float altura, peso;
    char modalidade[30];
    char alojamento[30];
};

struct medicos
{
    int id;
    struct pessoa medicos;
    struct endereco_ endereco;
    char equipe[30];
    char especializacao[25];
};

struct voluntario
{
    struct pessoa voluntario;
    struct endereco_ endereco;
    char funcao[25];
    char localAtuacao[30];
};

struct funcionario
{
    struct pessoa func;
    struct endereco_ endereco;
    float salario;
    char funcao[20];
    char localAtuacao[30];
};

struct usuario
{
    char usuario;
    char senha;
    char nivelAcesso;
};

struct medalhas
{
    int ouro;
    int prata;
    int bronze;
};

struct agendaTreinos
{
    char paisEquipe[25];
    int dia,mes,ano;
    char localTreino[25];
    char modalidade[25];
};

struct pais
{
    char nome[30];
    int ouro;
    int prata;
    int bronze;
};

struct usuarios_infos {
    char login[10];
    char senha[10];
};

struct jogo {
    char local[30];
    int hora, minuto;//15:30 (pra colocar ":" precisa avisar no scanf)
    int dia, mes, ano; //avisar no scanf a separação por "/". Ex. 20/06/21
    char modalidade[30];
    char rival_1[30], rival_2[30];
};
