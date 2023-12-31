
    #include <stddef.h>
    typedef struct atendimento
    {
        char CPF[15];
        char nome[100];
        char numero[5];
        char tipo[3];
        char data_in[20];
        char data_out[20];
        char CPF_fun[15];
        char nome_fun[100];
        int valor;
        char status;// Ativado ou Desativado
    }Atendimento;
    
    char atendimento(void);
    void exibe_atendimento(Atendimento* ate);
    void exibe_cout(Atendimento* ate);

    
    void exibe_atendimentoT(Atendimento* ate);
    void exibe_coutT(Atendimento* ate);

    void check_in(void);
    void grava_atendimento(Atendimento* ate);

    void check_out(void);

    void procurar_cin(void);
    Atendimento* busca_Atendimento(void);
    int busca_cliente_existe(char cpf[], char nome[]);
    int busca_quarto_existe(char numero[], char tipo[]);
    int busca_funcionario_existe(char cpf[], char nome[]);

    void delete_atendimento(char *cpf, char *nome);
    void listar_atendimento(void);
    void listar_ate(void);
    void listar_checkout(void);
    void listar_cout(void);

    char* data_hora(char* data_hora, size_t tam);

    void buscar_checkin_por_cpf(char* cpf);
    void buscar_cin(void);

    void buscar_checkout_por_cpf(char* cpf);
    void buscar_cout(void);