
struct pessoa
{
int id;
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
int id;
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
int ouro,  prata, bronze;
int quantMedalhas;
};

struct calendario
{
char local[40];
char hora[40];
char data[40];
char modalidade[40];
char rival_1[40], rival_2[40];
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
char nome[20];
int ouro;
int prata;
int bronze;
};


struct usuarios_infos {
    char login[10];
    char senha[10];
};
