/*
    Universidade de Brasília
	Instituto de Ciências Exatas
	Departamento de Ciência da Computação
	Algoritmos e Programação de Computadores – 2024.1
	Aluno(a): Júlia Paulo Amorim
	Matricula: 241039270
*/

//Incluindo as bibliotecas//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo a função clear//
#if _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

//Definindo as cores para o terminal e o reset//
#define VERMELHO "\x1b[31m"
#define ROSA "\x1b[95m"
#define UNDERLINE "\x1b[4m"
#define RESET "\x1b[0m"

//Declaração das funções criadas//
void configuracoes(), desenho_ranking(), modo_de_dificuldade(), desenho_boa_sorte(), desenho_tem_certeza();
void amiga_fofa(), apaga(), desenho_titulo(), bem_vindo(), mostra_ranking(), desenho_ganhou();
void jogar(), menu_principal(), desenho_config(), le_matriz_iniciante(), mostra_matriz();
void instrucoes(), desenho_instrucoes(), desenho_modo(), jogo_atual(), abre_arquivo_ranking();
void perdeu(), desenho_menu_principal(), desenho_perdeu(), monitores(), zerar_ranking(), inicializando_main();
void fechou_linha(), fechou_coluna(), ganhou(), abre_arquivo_iniciante(), som_de_errou();
void inicializa_jogo(), desenho_por_enquanto(), abre_arquivo_intermediario(), desenho_nem_tente();
void abre_arquivo_avancado(), zerou(), le_matriz_intermediaria(), le_matriz_avancado(), ja_zerou();

//Criando o struct dos dados do jogador//
typedef struct {
    char nickname[50];
    int pontuacao;
} jogador;

//Variáveis globais//
int vidas, cont_vitorias, aux_linha, aux_coluna, modo_arquiv, linhas, colunas;
int cont_jogos_total = 0, cont_jogos_inician = 0, cont_jogos_interm = 0, cont_jogos_avanc = 0;
int idx_linha[10], idx_coluna[10];
char matriz[10][10], numeros[20][20], resposta[10][10];
jogador dados_jogador;

//Arquivos//
FILE* iniciante;
FILE* intermediario;
FILE* avancado;
FILE* ranking;
char rank[] = "ranking.bin";

//Função de printar o título do jogo//
void desenho_titulo() {
    printf("\n");
    printf(VERMELHO"         ▄▄▄██▀▀▒█████   ▄████ ▒█████                    \n");
    printf("           ▒██ ▒██▒  ██▒██▒ ▀█▒██▒  ██▒                  \n");
    printf("           ░██ ▒██░  ██▒██░▄▄▄▒██░  ██▒                  \n");
    printf("        ▓██▄██▓▒██   ██░▓█  ██▒██   ██░                  \n");
    printf("         ▓███▒ ░ ████▓▒░▒▓███▀░ ████▓▒░                  \n");
    printf("         ▒▓▒▒░ ░ ▒░▒░▒░ ░▒   ▒░ ▒░▒░▒░                   \n");
    printf("         ▒ ░▒░   ░ ▒ ▒░  ░   ░  ░ ▒ ▒░                   \n");
    printf("         ░ ░ ░ ░ ░ ░ ▒ ░ ░   ░░ ░ ░ ▒                    \n");
    printf("        ▓█████▄ ▄▄▄░ ░    ██████  ░ ░                    \n");
    printf("        ▒██▀ ██▒████▄   ▒██    ▒                         \n");
    printf("        ░██   █▒██  ▀█▄ ░ ▓██▄                           \n");
    printf("        ░▓█▄   ░██▄▄▄▄██  ▒   ██▒                        \n");
    printf("        ░▒████▓ ▓█   ▓██▒██████▒▒                        \n");
    printf("         ▒▒▓  ▒ ▒▒   ▓▒█▒ ▒▓▒ ▒ ░                        \n");
    printf("         ░ ▒  ▒  ▒   ▒▒ ░ ░▒  ░ ░                        \n");
    printf("         ░ ░  ░  ░   ▒  ░  ░  ░                          \n");
    printf("          ██████ ▒█████ ░███▄ ▄███▓▄▄▄       ██████      \n");
    printf("        ▒██    ▒▒██▒  ██▓██▒▀█▀ ██▒████▄   ▒██    ▒      \n");
    printf("        ░ ▓██▄  ▒██░  ██▓██    ▓██▒██  ▀█▄ ░ ▓██▄        \n");
    printf("          ▒   ██▒██   ██▒██    ▒██░██▄▄▄▄██  ▒   ██▒     \n");
    printf("        ▒██████▒░ ████▓▒▒██▒   ░██▒▓█   ▓██▒██████▒▒     \n");
    printf("        ▒ ▒▓▒ ▒ ░ ▒░▒░▒░░ ▒░   ░  ░▒▒   ▓▒█▒ ▒▓▒ ▒ ░     \n");
    printf("        ░ ░▒  ░ ░ ░ ▒ ▒░░  ░      ░ ▒   ▒▒ ░ ░▒  ░ ░     \n");
    printf("        ░  ░  ░ ░ ░ ░ ▒ ░      ░    ░   ▒  ░  ░  ░       \n");
    printf("              ░     ░ ░        ░        ░  ░     ░       \n" RESET);
}

//Função que printa o desenho de menu principal//
void desenho_menu_principal() {
    printf("\n\n");
    printf(VERMELHO"         ███▄ ▄███▓█████ ███▄    █ █    ██     ██▓███  ██▀███  ██▓███▄    █ ▄████▄  ██▓██▓███  ▄▄▄      ██▓    \n");
    printf("        ▓██▒▀█▀ ██▓█   ▀ ██ ▀█   █ ██  ▓██▒   ▓██░  ██▓██ ▒ ██▓██▒██ ▀█   █▒██▀ ▀█ ▓██▓██░  ██▒████▄   ▓██▒    \n");
    printf("        ▓██    ▓██▒███  ▓██  ▀█ ██▓██  ▒██░   ▓██░ ██▓▓██ ░▄█ ▒██▓██  ▀█ ██▒▓█    ▄▒██▓██░ ██▓▒██  ▀█▄ ▒██░    \n");
    printf("        ▒██    ▒██▒▓█  ▄▓██▒  ▐▌██▓▓█  ░██░   ▒██▄█▓▒ ▒██▀▀█▄ ░██▓██▒  ▐▌██▒▓▓▄ ▄██░██▒██▄█▓▒ ░██▄▄▄▄██▒██░    \n");
    printf("        ▒██▒   ░██░▒████▒██░   ▓██▒▒█████▓    ▒██▒ ░  ░██▓ ▒██░██▒██░   ▓██▒ ▓███▀ ░██▒██▒ ░  ░▓█   ▓██░██████▒\n");
    printf("        ░ ▒░   ░  ░░ ▒░ ░ ▒░   ▒ ▒░▒▓▒ ▒ ▒    ▒▓▒░ ░  ░ ▒▓ ░▒▓░▓ ░ ▒░   ▒ ▒░ ░▒ ▒  ░▓ ▒▓▒░ ░  ░▒▒   ▓▒█░ ▒░▓  ░\n");
    printf("        ░  ░      ░░ ░  ░ ░░   ░ ▒░░▒░ ░ ░    ░▒ ░      ░▒ ░ ▒░▒ ░ ░░   ░ ▒░ ░  ▒   ▒ ░▒ ░      ▒   ▒▒ ░ ░ ▒  ░\n");
    printf("        ░      ░     ░     ░   ░ ░ ░░░ ░ ░    ░░        ░░   ░ ▒ ░  ░   ░ ░░        ▒ ░░        ░   ▒    ░ ░   \n");
    printf("               ░     ░  ░        ░   ░                   ░     ░          ░░ ░      ░               ░  ░   ░  ░\n\n"RESET);
}

//Função que printa o desenho de instruções//
void desenho_instrucoes() {
    printf("\n\n");
    printf(VERMELHO "         ██▓███▄    █  ██████▄▄▄█████▓██▀███  █    ██ ▄████▄  ▒█████ ▓█████  ██████ \n");
    printf("        ▓██▒██ ▀█   █▒██    ▒▓  ██▒ ▓▓██ ▒ ██▒██  ▓██▒██▀ ▀█ ▒██▒  ██▓█   ▀▒██    ▒ \n");
    printf("        ▒██▓██  ▀█ ██░ ▓██▄  ▒ ▓██░ ▒▓██ ░▄█ ▓██  ▒██▒▓█    ▄▒██░  ██▒███  ░ ▓██▄   \n");
    printf("        ░██▓██▒  ▐▌██▒ ▒   ██░ ▓██▓ ░▒██▀▀█▄ ▓▓█  ░██▒▓▓▄ ▄██▒██   ██▒▓█  ▄  ▒   ██▒\n");
    printf("        ░██▒██░   ▓██▒██████▒▒ ▒██▒ ░░██▓ ▒██▒▒█████▓▒ ▓███▀ ░ ████▓▒░▒████▒██████▒▒\n");
    printf("        ░▓ ░ ▒░   ▒ ▒▒ ▒▓▒ ▒ ░ ▒ ░░  ░ ▒▓ ░▒▓░▒▓▒ ▒ ▒░ ░▒ ▒  ░ ▒░▒░▒░░░ ▒░ ▒ ▒▓▒ ▒ ░\n");
    printf("         ▒ ░ ░░   ░ ▒░ ░▒  ░ ░   ░     ░▒ ░ ▒░░▒░ ░ ░  ░  ▒    ░ ▒ ▒░ ░ ░  ░ ░▒  ░ ░\n");
    printf("         ▒ ░  ░   ░ ░░  ░  ░   ░       ░░   ░ ░░░ ░ ░░       ░ ░ ░ ▒    ░  ░  ░  ░  \n");
    printf("         ░          ░      ░            ░       ░    ░ ░         ░ ░    ░  ░     ░  \n\n" RESET);
}

//Função que printa o desenho das configurações//
void desenho_config() {
    printf("\n\n");
    printf(VERMELHO"         ▄████▄  ▒█████  ███▄    █  ███████▓ ▄████ █    ██ ██▀███  ▄▄▄      ▄████▄  ▒█████ ▓█████  ██████ \n");
    printf("        ▒██▀ ▀█ ▒██▒  ██▒██ ▀█   █▓██   ▓██▒██▒ ▀█▒██  ▓██▓██ ▒ ██▒████▄   ▒██▀ ▀█ ▒██▒  ██▓█   ▀▒██    ▒ \n");
    printf("        ▒▓█    ▄▒██░  ██▓██  ▀█ ██▒████ ▒██▒██░▄▄▄▓██  ▒██▓██ ░▄█ ▒██  ▀█▄ ▒▓█    ▄▒██░  ██▒███  ░ ▓██▄   \n");
    printf("        ▒▓▓▄ ▄██▒██   ██▓██▒  ▐▌██░▓█▒  ░██░▓█  ██▓▓█  ░██▒██▀▀█▄ ░██▄▄▄▄██▒▓▓▄ ▄██▒██   ██▒▓█  ▄  ▒   ██▒\n");
    printf("        ▒ ▓███▀ ░ ████▓▒▒██░   ▓██░▒█░  ░██░▒▓███▀▒▒█████▓░██▓ ▒██▒▓█   ▓██▒ ▓███▀ ░ ████▓▒░▒████▒██████▒▒\n");
    printf("        ░ ░▒ ▒  ░ ▒░▒░▒░░ ▒░   ▒ ▒ ▒ ░  ░▓  ░▒   ▒░▒▓▒ ▒ ▒░ ▒▓ ░▒▓░▒▒   ▓▒█░ ░▒ ▒  ░ ▒░▒░▒░░░ ▒░ ▒ ▒▓▒ ▒ ░\n");
    printf("          ░  ▒    ░ ▒ ▒░░ ░░   ░ ▒░░     ▒ ░ ░   ░░░▒░ ░ ░  ░▒ ░ ▒░ ▒   ▒▒ ░ ░  ▒    ░ ▒ ▒░ ░ ░  ░ ░▒  ░ ░\n");
    printf("        ░       ░ ░ ░ ▒    ░   ░ ░ ░ ░   ▒ ░ ░   ░ ░░░ ░ ░  ░░   ░  ░   ▒  ░       ░ ░ ░ ▒    ░  ░  ░  ░  \n");
    printf("        ░ ░         ░ ░          ░       ░       ░   ░       ░          ░  ░ ░         ░ ░    ░  ░     ░  \n\n" RESET);
}

//Função que printa o desenho do ranking//
void desenho_ranking() {
    printf("\n\n");
    printf(VERMELHO"         ██▀███  ▄▄▄      ███▄    █ ██ ▄█▀██▓███▄    █  ▄████ \n");
    printf("        ▓██ ▒ ██▒████▄    ██ ▀█   █ ██▄█▒▓██▒██ ▀█   █ ██▒ ▀█▒\n");
    printf("        ▓██ ░▄█ ▒██  ▀█▄ ▓██  ▀█ ██▓███▄░▒██▓██  ▀█ ██▒██░▄▄▄░\n");
    printf("        ▒██▀▀█▄ ░██▄▄▄▄██▓██▒  ▐▌██▓██ █▄░██▓██▒  ▐▌██░▓█  ██▓\n");
    printf("        ░██▓ ▒██▒▓█   ▓██▒██░   ▓██▒██▒ █░██▒██░   ▓██░▒▓███▀▒\n");
    printf("        ░ ▒▓ ░▒▓░▒▒   ▓▒█░ ▒░   ▒ ▒▒ ▒▒ ▓░▓ ░ ▒░   ▒ ▒ ░▒   ▒ \n");
    printf("          ░▒ ░ ▒░ ▒   ▒▒ ░ ░░   ░ ▒░ ░▒ ▒░▒ ░ ░░   ░ ▒░ ░   ░ \n");
    printf("          ░░   ░  ░   ▒     ░   ░ ░░ ░░ ░ ▒ ░  ░   ░ ░░ ░   ░ \n");
    printf("           ░          ░  ░        ░░  ░   ░          ░      ░ \n\n" RESET);
}

//Função que printa o desenho do modo de jogo//
void desenho_modo() {
    printf("\n\n");
    printf(VERMELHO"         ███▄ ▄███▓▒█████ ▓█████▄ ▒█████     ▓█████▄▓█████     ▄▄▄██▀▀▒█████   ▄████ ▒█████  \n");
    printf("        ▓██▒▀█▀ ██▒██▒  ██▒██▀ ██▒██▒  ██▒   ▒██▀ ██▓█   ▀       ▒██ ▒██▒  ██▒██▒ ▀█▒██▒  ██▒\n");
    printf("        ▓██    ▓██▒██░  ██░██   █▒██░  ██▒   ░██   █▒███         ░██ ▒██░  ██▒██░▄▄▄▒██░  ██▒\n");
    printf("        ▒██    ▒██▒██   ██░▓█▄   ▒██   ██░   ░▓█▄   ▒▓█  ▄    ▓██▄██▓▒██   ██░▓█  ██▒██   ██░\n");
    printf("        ▒██▒   ░██░ ████▓▒░▒████▓░ ████▓▒░   ░▒████▓░▒████▒    ▓███▒ ░ ████▓▒░▒▓███▀░ ████▓▒░\n");
    printf("        ░ ▒░   ░  ░ ▒░▒░▒░ ▒▒▓  ▒░ ▒░▒░▒░     ▒▒▓  ▒░░ ▒░ ░    ▒▓▒▒░ ░ ▒░▒░▒░ ░▒   ▒░ ▒░▒░▒░ \n");
    printf("        ░  ░      ░ ░ ▒ ▒░ ░ ▒  ▒  ░ ▒ ▒░     ░ ▒  ▒ ░ ░  ░    ▒ ░▒░   ░ ▒ ▒░  ░   ░  ░ ▒ ▒░ \n");
    printf("        ░      ░  ░ ░ ░ ▒  ░ ░  ░░ ░ ░ ▒      ░ ░  ░   ░       ░ ░ ░ ░ ░ ░ ▒ ░ ░   ░░ ░ ░ ▒  \n");
    printf("               ░      ░ ░    ░       ░ ░        ░      ░  ░    ░   ░     ░ ░       ░    ░ ░  \n\n"RESET);
}

//Função que printa o desenho de perdeu//
void desenho_perdeu() {
    printf("\n\n");
    printf(VERMELHO"         ██▓███  ▓█████  ██▀███  ▓█████▄ ▓█████  █    ██  ▐██▌\n");
    printf("        ▓██░  ██▒▓█   ▀ ▓██ ▒ ██▒▒██▀ ██▌▓█   ▀  ██  ▓██▒ ▐██▌\n");
    printf("        ▓██░ ██▓▒▒███   ▓██ ░▄█ ▒░██   █▌▒███   ▓██  ▒██░ ▐██▌\n");
    printf("        ▒██▄█▓▒ ▒▒▓█  ▄ ▒██▀▀█▄  ░▓█▄   ▌▒▓█  ▄ ▓▓█  ░██░ ▓██▒\n");
    printf("        ▒██▒ ░  ░░▒████▒░██▓ ▒██▒░▒████▓ ░▒████▒▒▒█████▓  ▒▄▄ \n");
    printf("        ▒▓▒░ ░  ░░░ ▒░ ░░ ▒▓ ░▒▓░ ▒▒▓  ▒ ░░ ▒░ ░░▒▓▒ ▒ ▒  ░▀▀▒\n");
    printf("        ░▒ ░      ░ ░  ░  ░▒ ░ ▒░ ░ ▒  ▒  ░ ░  ░░░▒░ ░ ░  ░  ░\n");
    printf("        ░░          ░     ░░   ░  ░ ░  ░    ░    ░░░ ░ ░     ░\n");
    printf("                    ░  ░   ░        ░       ░  ░   ░      ░   \n\n"RESET);
}

//Presente especial para vocês monitores :)//
void monitores() {
    printf("\n\n");
    printf(VERMELHO"         ▄▄▄       ███▄ ▄███▓ ▒█████      ██▒   █▓ ▒█████   ▄████▄  ▓█████   ██████   \n");
    printf("        ▒████▄    ▓██▒▀█▀ ██▒▒██▒  ██▒   ▓██░   █▒▒██▒  ██▒▒██▀ ▀█  ▓█   ▀ ▒██    ▒   \n");
    printf("        ▒██  ▀█▄  ▓██    ▓██░▒██░  ██▒    ▓██  █▒░▒██░  ██▒▒▓█    ▄ ▒███   ░ ▓██▄     \n");
    printf("        ░██▄▄▄▄██ ▒██    ▒██ ▒██   ██░     ▒██ █░░▒██   ██░▒▓▓▄ ▄██▒▒▓█  ▄   ▒   ██▒  \n");
    printf("         ▓█   ▓██▒▒██▒   ░██▒░ ████▓▒░      ▒▀█░  ░ ████▓▒░▒ ▓███▀ ░░▒████▒▒██████▒▒  \n");
    printf("         ▒▒   ▓▒█░░ ▒░   ░  ░░ ▒░▒░▒░       ░ ▐░  ░ ▒░▒░▒░ ░ ░▒ ▒  ░░░ ▒░ ░▒ ▒▓▒ ▒ ░  \n");
    printf("          ▒   ▒▒ ░░  ░      ░  ░ ▒ ▒░       ░ ░░    ░ ▒ ▒░   ░  ▒    ░ ░  ░░ ░▒  ░ ░  \n");
    printf("          ░   ▒   ░      ░   ░ ░ ░ ▒          ░░  ░ ░ ░ ▒  ░           ░   ░  ░  ░    \n");
    printf("              ░  ░       ░       ░ ░           ░      ░ ░  ░ ░         ░  ░      ░    \n");
    printf("                                              ░            ░                          \n");
    printf("         ███▄ ▄███▓ ▒█████   ███▄    █  ██▓▄▄▄█████▓ ▒█████   ██▀███  ▓█████   ██████ \n");
    printf("        ▓██▒▀█▀ ██▒▒██▒  ██▒ ██ ▀█   █ ▓██▒▓  ██▒ ▓▒▒██▒  ██▒▓██ ▒ ██▒▓█   ▀ ▒██    ▒ \n");
    printf("        ▓██    ▓██░▒██░  ██▒▓██  ▀█ ██▒▒██▒▒ ▓██░ ▒░▒██░  ██▒▓██ ░▄█ ▒▒███   ░ ▓██▄   \n");
    printf("        ▒██    ▒██ ▒██   ██░▓██▒  ▐▌██▒░██░░ ▓██▓ ░ ▒██   ██░▒██▀▀█▄  ▒▓█  ▄   ▒   ██▒\n");
    printf("        ▒██▒   ░██▒░ ████▓▒░▒██░   ▓██░░██░  ▒██▒ ░ ░ ████▓▒░░██▓ ▒██▒░▒████▒▒██████▒▒\n");
    printf("        ░ ▒░   ░  ░░ ▒░▒░▒░ ░ ▒░   ▒ ▒ ░▓    ▒ ░░   ░ ▒░▒░▒░ ░ ▒▓ ░▒▓░░░ ▒░ ░▒ ▒▓▒ ▒ ░\n");
    printf("        ░  ░      ░  ░ ▒ ▒░ ░ ░░   ░ ▒░ ▒ ░    ░      ░ ▒ ▒░   ░▒ ░ ▒░ ░ ░  ░░ ░▒  ░ ░\n");
    printf("        ░      ░   ░ ░ ░ ▒     ░   ░ ░  ▒ ░  ░      ░ ░ ░ ▒    ░░   ░    ░   ░  ░  ░  \n");
    printf("               ░       ░ ░           ░  ░               ░ ░     ░        ░  ░      ░  \n\n"RESET);
}

//Função do desenho de ganhou//
void desenho_ganhou() {
    printf("\n\n");
    printf(VERMELHO"          ▄████  ▄▄▄       ███▄    █  ██░ ██  ▒█████   █    ██     \n");
    printf("         ██▒ ▀█▒▒████▄     ██ ▀█   █ ▓██░ ██▒▒██▒  ██▒ ██  ▓██▒    \n");
    printf("        ▒██░▄▄▄░▒██  ▀█▄  ▓██  ▀█ ██▒▒██▀▀██░▒██░  ██▒▓██  ▒██░    \n");
    printf("        ░▓█  ██▓░██▄▄▄▄██ ▓██▒  ▐▌██▒░▓█ ░██ ▒██   ██░▓▓█  ░██░    \n");
    printf("        ░▒▓███▀▒ ▓█   ▓██▒▒██░   ▓██░░▓█▒░██▓░ ████▓▒░▒▒█████▓     \n");
    printf("         ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ▒ ▒  ▒ ░░▒░▒░ ▒░▒░▒░ ░▒▓▒ ▒ ▒     \n");
    printf("          ░   ░   ▒   ▒▒ ░░ ░░   ░ ▒░ ▒ ░▒░ ░  ░ ▒ ▒░ ░░▒░ ░ ░     \n");
    printf("        ░ ░   ░   ░   ▒      ░   ░ ░  ░  ░░ ░░ ░ ░ ▒   ░░░ ░ ░     \n");
    printf("              ░       ░  ░         ░  ░  ░  ░    ░ ░     ░         \n\n"RESET);
}

//Função do desenho de por enquanto...//
void desenho_por_enquanto() {
    printf("\n\n");                                                   
    printf(VERMELHO"         ██▓███   ▒█████   ██▀███    \n");
    printf("        ▓██░  ██▒▒██▒  ██▒▓██ ▒ ██▒  \n");
    printf("        ▓██░ ██▓▒▒██░  ██▒▓██ ░▄█ ▒  \n");
    printf("        ▒██▄█▓▒ ▒▒██   ██░▒██▀▀█▄    \n");
    printf("        ▒██▒ ░  ░░ ████▓▒░░██▓ ▒██▒  \n");
    printf("        ▒▓▒░ ░  ░░ ▒░▒░▒░ ░ ▒▓ ░▒▓░  \n");
    printf("        ░▒ ░       ░ ▒ ▒░   ░▒ ░ ▒░  \n");
    printf("        ░░       ░ ░ ░ ▒    ░░   ░   \n");
    printf("                     ░ ░     ░       \n");
    printf("\n");
    printf("        ▓█████  ███▄    █   █████   █    ██  ▄▄▄       ███▄    █ ▄▄▄█████▓ ▒█████                \n");
    printf("        ▓█   ▀  ██ ▀█   █ ▒██▓  ██▒ ██  ▓██▒▒████▄     ██ ▀█   █ ▓  ██▒ ▓▒▒██▒  ██▒              \n");
    printf("        ▒███   ▓██  ▀█ ██▒▒██▒  ██░▓██  ▒██░▒██  ▀█▄  ▓██  ▀█ ██▒▒ ▓██░ ▒░▒██░  ██▒              \n");
    printf("        ▒▓█  ▄ ▓██▒  ▐▌██▒░██  █▀ ░▓▓█  ░██░░██▄▄▄▄██ ▓██▒  ▐▌██▒░ ▓██▓ ░ ▒██   ██░              \n");
    printf("        ░▒████▒▒██░   ▓██░░▒███▒█▄ ▒▒█████▓  ▓█   ▓██▒▒██░   ▓██░  ▒██▒ ░ ░ ████▓▒░ ██▓  ██▓  ██▓\n");
    printf("        ░░ ▒░ ░░ ▒░   ▒ ▒ ░░ ▒▒░ ▒ ░▒▓▒ ▒ ▒  ▒▒   ▓▒█░░ ▒░   ▒ ▒   ▒ ░░   ░ ▒░▒░▒░  ▒▓▒  ▒▓▒  ▒▓▒\n");
    printf("         ░ ░  ░░ ░░   ░ ▒░ ░ ▒░  ░ ░░▒░ ░ ░   ▒   ▒▒ ░░ ░░   ░ ▒░    ░      ░ ▒ ▒░  ░▒   ░▒   ░▒ \n");
    printf("           ░      ░   ░ ░    ░   ░  ░░░ ░ ░   ░   ▒      ░   ░ ░   ░      ░ ░ ░ ▒   ░    ░    ░  \n");
    printf("           ░  ░         ░     ░       ░           ░  ░         ░              ░ ░    ░    ░    ░ \n");
    printf("                                                                                     ░    ░    ░ \n\n"RESET);
}

//Função que printa o desenho de nem tente...//
void desenho_nem_tente() {
    printf("\n\n");
    printf(VERMELHO"         ███▄    █ ▓█████  ███▄ ▄███▓                            \n");
    printf("         ██ ▀█   █ ▓█   ▀ ▓██▒▀█▀ ██▒               \n");
    printf("        ▓██  ▀█ ██▒▒███   ▓██    ▓██░               \n");
    printf("        ▓██▒  ▐▌██▒▒▓█  ▄ ▒██    ▒██                \n");
    printf("        ▒██░   ▓██░░▒████▒▒██▒   ░██▒               \n");
    printf("        ░ ▒░   ▒ ▒ ░░ ▒░ ░░ ▒░   ░  ░               \n");
    printf("        ░ ░░   ░ ▒░ ░ ░  ░░  ░      ░               \n");
    printf("           ░   ░ ░    ░   ░      ░                  \n");
    printf("                 ░    ░  ░       ░                  \n");
    printf("\n");
    printf("        ▄▄▄█████▓▓█████  ███▄    █ ▄▄▄█████▓▓█████  \n");
    printf("        ▓  ██▒ ▓▒▓█   ▀  ██ ▀█   █ ▓  ██▒ ▓▒▓█   ▀  \n");
    printf("        ▒ ▓██░ ▒░▒███   ▓██  ▀█ ██▒▒ ▓██░ ▒░▒███    \n");
    printf("        ░ ▓██▓ ░ ▒▓█  ▄ ▓██▒  ▐▌██▒░ ▓██▓ ░ ▒▓█  ▄  \n");
    printf("          ▒██▒ ░ ░▒████▒▒██░   ▓██░  ▒██▒ ░ ░▒████▒ \n");
    printf("          ▒ ░░   ░░ ▒░ ░░ ▒░   ▒ ▒   ▒ ░░   ░░ ▒░ ░ \n");
    printf("            ░     ░ ░  ░░ ░░   ░ ▒░    ░     ░ ░  ░ \n");
    printf("          ░         ░      ░   ░ ░   ░         ░    \n");
    printf("                    ░  ░         ░             ░  ░ \n");
    printf("                                                    \n\n"RESET);
}

void desenho_tem_certeza() {
    printf("\n\n");
    printf(VERMELHO"        ▄▄▄█████▓▓█████  ███▄ ▄███▓    ▄████▄  ▓█████  ██▀███  ▄▄▄█████▓▓█████ ▒███████▒ ▄▄▄                    \n");
    printf("        ▓  ██▒ ▓▒▓█   ▀ ▓██▒▀█▀ ██▒   ▒██▀ ▀█  ▓█   ▀ ▓██ ▒ ██▒▓  ██▒ ▓▒▓█   ▀ ▒ ▒ ▒ ▄▀░▒████▄                  \n");
    printf("        ▒ ▓██░ ▒░▒███   ▓██    ▓██░   ▒▓█    ▄ ▒███   ▓██ ░▄█ ▒▒ ▓██░ ▒░▒███   ░ ▒ ▄▀▒░ ▒██  ▀█▄                \n");
    printf("        ░ ▓██▓ ░ ▒▓█  ▄ ▒██    ▒██    ▒▓▓▄ ▄██▒▒▓█  ▄ ▒██▀▀█▄  ░ ▓██▓ ░ ▒▓█  ▄   ▄▀▒   ░░██▄▄▄▄██               \n");
    printf("          ▒██▒ ░ ░▒████▒▒██▒   ░██▒   ▒ ▓███▀ ░░▒████▒░██▓ ▒██▒  ▒██▒ ░ ░▒████▒▒███████▒ ▓█   ▓██▒ ██▓  ██▓  ██▓\n");
    printf("          ▒ ░░   ░░ ▒░ ░░ ▒░   ░  ░   ░ ░▒ ▒  ░░░ ▒░ ░░ ▒▓ ░▒▓░  ▒ ░░   ░░ ▒░ ░░▒▒ ▓░▒░▒ ▒▒   ▓▒█░ ▒▓▒  ▒▓▒  ▒▓▒\n");
    printf("            ░     ░ ░  ░░  ░      ░     ░  ▒    ░ ░  ░  ░▒ ░ ▒░    ░     ░ ░  ░░░▒ ▒ ░ ▒  ▒   ▒▒ ░ ░▒   ░▒   ░▒ \n");
    printf("          ░         ░   ░      ░      ░           ░     ░░   ░   ░         ░   ░ ░ ░ ░ ░  ░   ▒    ░    ░    ░  \n");
    printf("                    ░  ░       ░      ░ ░         ░  ░   ░                 ░  ░  ░ ░          ░  ░  ░    ░    ░ \n");
    printf("                                      ░                                        ░                    ░    ░    ░ \n\n"RESET);
}

//Função que printa o desenho de boa sorte...//
void desenho_boa_sorte() {
    printf("\n\n");
    printf(VERMELHO"        ▄▄▄▄    ▒█████   ▄▄▄                                     \n");
    printf("        ▓█████▄ ▒██▒  ██▒▒████▄                                  \n");
    printf("        ▒██▒ ▄██▒██░  ██▒▒██  ▀█▄                                \n");
    printf("        ▒██░█▀  ▒██   ██░░██▄▄▄▄██                               \n");
    printf("        ░▓█  ▀█▓░ ████▓▒░ ▓█   ▓██▒                              \n");
    printf("        ░▒▓███▀▒░ ▒░▒░▒░  ▒▒   ▓▒█░                              \n");
    printf("        ▒░▒   ░   ░ ▒ ▒░   ▒   ▒▒ ░                              \n");
    printf("         ░    ░ ░ ░ ░ ▒    ░   ▒                                 \n");
    printf("         ░          ░ ░        ░  ░                              \n");
    printf("              ░                                                  \n");
    printf("          ██████  ▒█████   ██▀███  ▄▄▄█████▓▓█████               \n");
    printf("        ▒██    ▒ ▒██▒  ██▒▓██ ▒ ██▒▓  ██▒ ▓▒▓█   ▀               \n");
    printf("        ░ ▓██▄   ▒██░  ██▒▓██ ░▄█ ▒▒ ▓██░ ▒░▒███                 \n");
    printf("          ▒   ██▒▒██   ██░▒██▀▀█▄  ░ ▓██▓ ░ ▒▓█  ▄               \n");
    printf("        ▒██████▒▒░ ████▓▒░░██▓ ▒██▒  ▒██▒ ░ ░▒████▒ ██▓  ██▓  ██▓\n");
    printf("        ▒ ▒▓▒ ▒ ░░ ▒░▒░▒░ ░ ▒▓ ░▒▓░  ▒ ░░   ░░ ▒░ ░ ▒▓▒  ▒▓▒  ▒▓▒\n");
    printf("        ░ ░▒  ░ ░  ░ ▒ ▒░   ░▒ ░ ▒░    ░     ░ ░  ░ ░▒   ░▒   ░▒ \n");
    printf("        ░  ░  ░  ░ ░ ░ ▒    ░░   ░   ░         ░    ░    ░    ░  \n");
    printf("              ░      ░ ░     ░                 ░  ░  ░    ░    ░ \n");
    printf("                                                     ░    ░    ░ \n\n"RESET);
}

//Amiga!//
void amiga_fofa() {
    printf("\n\n");
    printf(ROSA"           ____    ,---.    ,---..-./`)   .-_'''-.      ____           \n");
    printf("         .'  __ `. |    \\  /    |\\ .-.') '_( )_   \\   .'  __ `.         \n");
    printf("        /   '  \\  \\|  ,  \\/  ,  |/ `-' \\|(_ o _)|  ' /   '  \\  \\     \n");
    printf("        |___|  /  ||  |\\_   /|  | `-'`` . (_,_)/___| |___|  /  |          \n");
    printf("           _.-`   ||  _( )_/ |  | .---. |  |  .-----.   _.-`   |           \n");
    printf("        .'   _    || (_ o _) |  | |   | '  \\  '-   .'.'   _    |          \n");
    printf("        |  _( )_  ||  (_,_)  |  | |   |  \\  `-'`   | |  _( )_  |          \n");
    printf("        \\ (_ o _) /|  |      |  | |   |   \\        / \\ (_ o _) /        \n");
    printf("         '.(_,_).' '--'      '--' '---'    `'-...-'   '.(_,_).'            \n\n" RESET);
}

//Função que serve para dar clear no terminal//
void apaga() {
    system(CLEAR);
}

//Função que dá boas vindas e recebe o nickname do jogador//
void bem_vindo() {
    char lixo;
    desenho_titulo();
    printf("\n     "UNDERLINE"Seja bem-vindo ao jogo das somas!\n"RESET);
    printf("\n     Informe seu nickname: ");
    scanf("%[^\n]", dados_jogador.nickname);
    scanf("%c", &lixo);
    apaga();
}

//Função do menu principal que scanea a opção escolhida pelo jogador//
void menu_principal() {
    int opcao_menu;
    apaga();
    desenho_menu_principal();
    printf("        1 - Jogar\n");
    printf("        2 - Configurações\n");
    printf("        3 - Instruções\n");
    printf("        4 - Ranking\n");
    printf("        5 - Sair\n\n");
    //Caso o número digitado não esteja entre as opções o loop continua a pedir uma opção//
    while(1) {
        opcao_menu = 0;
        printf("        Digite a opção desejada: ");
        scanf(" %d", &opcao_menu);
        //Quebra do loop caso o número seja válido//
        if(opcao_menu>0 && opcao_menu<6) {
            break;
        }
        else {
            printf("\n        Esse é um número inválido\n");
            printf("        Tente outra vez :(\n\n");
        }
    }
    apaga();
    //De acordo com a opção escolhida vai para a função respectiva//
    if(opcao_menu==1) {
        inicializa_jogo();
    }
    else if(opcao_menu==2) {
        configuracoes();
    }
    else if(opcao_menu==3) {
        instrucoes();
    }
    else if(opcao_menu==4) {
        mostra_ranking();
    }
    else {
        exit(1);
    }
}

//Função para caso o jogador que já zerou o jogo tente voltar a jogar//
void ja_zerou() {
    desenho_nem_tente();
    printf("        Você já zerou o jogo das somas!\n");
    printf("        Infelizmente não tem mais o que fazer :(\n");
    printf("\n\n        Tecle <enter> para voltar ao menu principal...");
    getchar();
    getchar();
    apaga();
    menu_principal();
}

//Função que inicializa o jogo de acordo com as configurações e a quantidade de jogos jogada//
void inicializa_jogo() {
    //Caso o jogador tenha ganhado os 12 jogos possíveis e ainda tente jogar//
    if(cont_jogos_total==12) {
        ja_zerou();
    }
    //Se não tiver jogado nenhum jogo abre o arquivo iniciante//
    if(cont_jogos_total==0 || modo_arquiv==1) {
        modo_arquiv = 1;
        linhas = 4;
        colunas = 4;
    }
    else if(modo_arquiv==2) {
        modo_arquiv = 2;
        linhas = 6;
        colunas = 6;
    }
    else if(modo_arquiv==3) {
        modo_arquiv = 3;
        linhas = 7;
        colunas = 7;
    }
    //Case switch de acordo com o modo de jogo para ler a matriz//
    switch (modo_arquiv) {
    case 1:
        le_matriz_iniciante();
        break;
    case 2:
        le_matriz_intermediaria();
        break;
    default:
        le_matriz_avancado();
        break;
    }
    //Inicializa as vidas e as contagens//
    vidas = 5;
    cont_vitorias = 0;
    aux_coluna = 0;
    aux_linha = 0;
    jogar();
}

//Função que abre o arquivo binário do ranking//
void abre_arquivo_ranking() {
    ranking = fopen("ranking.bin", "r+b");
    //Caso não exista, cria o arquivo ranking//
    if(ranking==NULL) {
        ranking = fopen("ranking.bin", "w+b");
    }
}

//Função que mostra o ranking lendo do arquivo .bin//
void mostra_ranking() {
    desenho_ranking();
    abre_arquivo_ranking();
    fwrite(&dados_jogador, sizeof(jogador), 1, ranking);
    fread(&dados_jogador, sizeof(jogador), 1, ranking);
    if(dados_jogador.pontuacao!=0) {
        printf("\n        "VERMELHO"%d"RESET" %s\n", dados_jogador.pontuacao, dados_jogador.nickname);
    }
    printf("\n\n        Tecle <enter> para voltar ao menu principal...");
    getchar();
    getchar();
    menu_principal();
}

//Função principal para jogar o jogo//
void jogar() {
    mostra_matriz();
    jogo_atual();
}

//Função que roda o jogo//
void jogo_atual() {
    int chute_linha, chute_coluna;
    printf("\n        Você tem " VERMELHO"%d"RESET " vidas\n\n", vidas);
    //Caso o número digitado não esteja entre as opções o loop continua a pedir um novo chute//
    while(1) {
        printf("        Digite linha e coluna do elemento a ser apagado: ");
        scanf("%d %d", &chute_linha, &chute_coluna);
        //Quebra do loop caso os números sejam válidos//
        if((chute_coluna>0 && chute_coluna<(linhas+1)) && (chute_linha>0 && chute_linha<(linhas+1))) {
            break;
        }
        else {
            printf("\n        Esse é um número inválido\n");
            printf("        Tente outra vez :(\n\n");
        }
    }
    //Como as linhas e colunas estão sem contar o 0 na hora de fazer a comparação é retirado 1//
    if(resposta[chute_linha-1][chute_coluna-1]=='0') {
        //Coloca no local do acerto um espaço//
        matriz[chute_linha-1][chute_coluna-1] = ' ';
        //Coloca no local da matriz resposta um 1//
        resposta[chute_linha-1][chute_coluna-1] = '1';
        printf("\n        "VERMELHO"Muito bem!"RESET" Você acertou :)\n");
        fechou_linha();
        fechou_coluna();
        printf("\n        Tecle <enter> para continuar...");
        getchar();
        getchar();
        apaga();
    }
    else {
        //Se errou é retirado uma vida//
        vidas--;
        som_de_errou();
        printf("\n        Você é um "VERMELHO"erro"RESET" para a humanidade\n");
        printf("\n        Tecle <enter> para continuar...");
        getchar();
        getchar();
        apaga();
    }
    //Se o total de vidas é zero vai para a função perdeu//
    if(vidas==0) {
        perdeu();
    }
    //Caso a contagem de linhas e colunas fechadas tenha dado a multiplicação de linhas*2 o jogador ganhou//
    else if(cont_vitorias==(linhas*2)) {
        ganhou();
    }
    //Caso ainda tenha vidas volta para o jogo//
    else {
        jogar();
    }
}

//Função quando o jogador ganha o jogo, aumenta a cont_jogos_total e volta para o menu//
void ganhou() {
    apaga();
    cont_jogos_total++;
    //Caso o jogador tenha ganhado todos 12 jogos possíveis, fecha o arquivo avançado e vai para zerou//
    if(cont_jogos_total==12) {
        fclose(avancado);
        zerou();
    }
    desenho_ganhou();
    //De acordo com o modo do arquivo aumenta o respectivo contador//
    if(modo_arquiv==1) {
        cont_jogos_inician++;
        dados_jogador.pontuacao+=50;
    }
    else if(modo_arquiv==2) {
        cont_jogos_interm++;
        dados_jogador.pontuacao+=100;
    }
    else if(modo_arquiv==3) {
        cont_jogos_avanc++;
        dados_jogador.pontuacao+=200;
    }
    //Caso o jogador tenha terminado, o arquivo passa para o outro modo e fecha o antigo//
    if(cont_jogos_inician==4) {
        fclose(iniciante);
        cont_jogos_inician++;
        modo_arquiv = 2;
    }
    else if(cont_jogos_interm==4) {
        fclose(intermediario);
        cont_jogos_interm++;
        modo_arquiv = 3;
    }
    printf("        Parabéns você ganhou!\n\n");
    printf("        Tecle <enter> para continuar...");
    getchar();
    apaga();
    desenho_por_enquanto();
    printf("        Tecle <enter> para continuar...");
    getchar();
    apaga();
    menu_principal();
}

//Função que passa de elemento em elemento para ver se o jogador fechou a linha//
void fechou_linha() {
    int i, j;
    //A aux_linha é inicializada no inicializa_jogo e deixa o idx_linha com 0 na primeira vez que é rodado//
    if(aux_linha==0) {
        memset(idx_linha, 0, sizeof(idx_linha));
        aux_linha++;
    }
    //O aux_linha serve para ver se em outra jogada ele já havia fechado a linha//
    for(i=0; i<linhas; i++) {
        if(idx_linha[i]<(linhas+1)) {
            idx_linha[i] = 0;
        }
    }
    //Passando de elemento em elemento se for igual a '1' o idx_linha aumenta//
    for(i=0; i<linhas; i++) {
        for(j=0; j<linhas; j++) {
            if(resposta[i][j]=='1') {
                idx_linha[i]++;
            }
        }
    }
    for(i=0; i<linhas; i++) {
        if(idx_linha[i]==linhas) {
            printf("\n        Parabéns você fechou a linha %d!\n", i+1);
            //Aumenta o idx_linha mais um para que quando ele volte não repita//
            idx_linha[i]++;
            //A contagem serve para saber se o jogador ganhou ou não, caso seja igual a linhas*colunas ele ganha//
            cont_vitorias++;
            //Colocando espaços nos números da soma//
            numeros[1][i*2] = ' ';
            numeros[1][(i*2)+1] = ' ';
        }
    }
}

//Função que passa de elemento em elemento para ver se o jogador fechou a coluna//
void fechou_coluna() {
    int i, j;
    //A aux_coluna é inicializada no inicializa_jogo e deixa o idx_coluna com 0 na primeira vez que é rodado//
    if(aux_coluna==0) {
        memset(idx_coluna, 0, sizeof(idx_coluna));
        aux_coluna++;
    }
    //O aux_coluna serve para ver se em outra jogada ele já havia fechado a coluna//
    for(j=0; j<colunas; j++) {
        if(idx_coluna[j]<(colunas+1)) {
            idx_coluna[j] = 0;
        }
    }
    //Passando de elemento em elemento se for igual a '1' o idx_coluna aumenta//
    for(i=0; i<colunas; i++) {
        for(j=0; j<colunas; j++) {
            if(resposta[i][j]=='1') {
                idx_coluna[j]++;
            }
        }
    }
    for(j=0; j<colunas; j++) {
        if(idx_coluna[j]==colunas) {
            printf("\n        Parabéns você fechou a coluna %d!\n", j+1);
            //Aumenta o idx_coluna mais um para que quando ele volte não repita//
            idx_coluna[j]++;
            //A contagem serve para saber se o jogador ganhou ou não, caso seja igual a linhas*colunas ele ganha//
            cont_vitorias++;
            //Colocando espaços nos números da soma//
            numeros[0][j*2] = ' ';
            numeros[0][(j*2)+1] = ' ';
        }
    }
}

//Caso tenha perdido todas suas vidas pede para voltar ao menu principal e recomeçar o jogo//
void perdeu() {
    apaga();
    desenho_perdeu();
    printf("        Você perdeu :(\n\n");
    printf("        Tecle <enter> para voltar ao menu principal...");
    getchar();
    menu_principal();
}

//Função que abre o arquivo iniciante.txt//
void abre_arquivo_iniciante() {
    iniciante = fopen("iniciante.txt", "r");
    //Caso o arquivo não abra, o programa é finalizado//
    if(iniciante==0) {
        printf("\n        Desculpa! Banco de dados não disponível\n");
        exit(1);
    }
}

//Função que abre o arquivo intermediario.txt//
void abre_arquivo_intermediario() {
    intermediario = fopen("intermediario.txt", "r");
    //Caso o arquivo não abra, o programa é finalizado//
    if(intermediario==0) {
        printf("\n        Desculpa! Banco de dados não disponível\n");
        exit(1);
    }
}

//Função que abre o arquivo avancado.txt//
void abre_arquivo_avancado() {
    avancado = fopen("avancado.txt", "r");
    //Caso o arquivo não abra, o programa é finalizado//
    if(avancado==0) {
        printf("\n        Desculpa! Banco de dados não disponível\n");
        exit(1);
    }
}

//Lê as informações do arquivo iniciante, é chamada pelo inicializa_jogo//
void le_matriz_iniciante() {
    int i, j;
    char lixo, asterisco;
    memset(numeros, '\0', sizeof(numeros));
    memset(matriz, '\0', sizeof(matriz));
    memset(resposta, '\0', sizeof(resposta));
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            fscanf(iniciante, "%c", &matriz[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==3) {
                fscanf(iniciante, "%c", &lixo);
            }
        }
    }
    for(i=0; i<2; i++) {
        for(j=0; j<8; j++) {
            fscanf(iniciante, "%c", &numeros[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==7) {
                fscanf(iniciante, "%c", &lixo);
            }
        }
    }
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            fscanf(iniciante, "%c", &resposta[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==(linhas-1)) {
                fscanf(iniciante, "%c", &lixo);
            }
        }
    }
    fscanf(iniciante, "%c", &lixo);
    fscanf(iniciante, "%c", &asterisco);
}

//Lê as informações do arquivo intermediario, é chamada pelo incializa_jogo//
void le_matriz_intermediaria() {
    int i, j;
    char lixo, asterisco;
    memset(numeros, '\0', sizeof(numeros));
    memset(matriz, '\0', sizeof(matriz));
    memset(resposta, '\0', sizeof(resposta));
    for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            fscanf(intermediario, "%c", &matriz[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==5) {
                fscanf(intermediario, "%c", &lixo);
            }
        }
    }
    for(i=0; i<2; i++) {
        for(j=0; j<12; j++) {
            fscanf(intermediario, "%c", &numeros[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==11) {
                fscanf(intermediario, "%c", &lixo);
            }
        }
    }
    for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            fscanf(intermediario, "%c", &resposta[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==5) {
                fscanf(intermediario, "%c", &lixo);
            }
        }
    }
    fscanf(intermediario, "%c", &lixo);
    fscanf(intermediario, "%c", &asterisco);
}

//Lê as informações do arquivo avancado, é chamada pelo incializa_jogo//
void le_matriz_avancado() {
    int i, j;
    char lixo, asterisco;
    memset(numeros, '\0', sizeof(numeros));
    memset(matriz, '\0', sizeof(matriz));
    memset(resposta, '\0', sizeof(resposta));
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            fscanf(avancado, "%c", &matriz[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==6) {
                fscanf(avancado, "%c", &lixo);
            }
        }
    }
    for(i=0; i<2; i++) {
        for(j=0; j<14; j++) {
            fscanf(avancado, "%c", &numeros[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==13) {
                fscanf(avancado, "%c", &lixo);
            }
        }
    }
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            fscanf(avancado, "%c", &resposta[i][j]);
            //Na última parte lê o \n que vai para o buffer de teclado//
            if(j==6) {
                fscanf(avancado, "%c", &lixo);
            }
        }
    }
    fscanf(avancado, "%c", &lixo);
    fscanf(avancado, "%c", &asterisco);
}

//Função que printa a matriz para o jogador, de acordo com as linhas e colunas//
void mostra_matriz() {
    int i, j, contador;
    contador = 0;
    printf("\n\n");
    printf("        ");
    //Loop para printar a parte inicial em que só a uma linha com as somas das colunas//
    for(j=0; j<(linhas*2); j++) {
        printf("%c", numeros[0][j]);
        //Contador serve para printar os espaços corretamentes entre dois chars//
        contador++;
        if(contador%2==0) {
            printf(" ");
        }
    }
    printf("\n       ");
    for(i=0; i<(linhas*3)+1; i++) {
        printf("-");
    }
    printf("\n");
    //Loop para printar primeiro as somas das linhas sempre em dois chars//
    //O 'j' dos dois chars eu deixei como (i*2) para facilitar e deixar tudo em um loop//
    for(i=0; i<linhas; i++) {
        printf("    %c%c |", numeros[1][i*2], numeros[1][(i*2)+1]);
        //Loop menor para ir printando os números da matriz do jogo//
        for(j=0; j<linhas; j++) {
            printf(" %c ", matriz[i][j]);
        }
        printf("\n");
    }
}

//Função mostra as opções da configurações e scanea a opção do jogador//
void configuracoes() {
    int opcao_config;
    desenho_config();
    printf("        1 - Zerar Ranking\n");
    printf("        2 - Modo de Dificuldade\n");
    printf("        3 - Voltar ao menu principal\n\n");
    //Enquanto a opção não for um número válido volta o loop e pede a opção novamente//
    while(1) {
        opcao_config = 0;
        printf("        Digite a opção desejada: ");
        scanf("%d", &opcao_config);
        //Se o número digitado estiver entre as opções quebra o loop//
        if(opcao_config>=0 && opcao_config<4) {
            break;
        }
        else {
            printf("\n        Esse é um número inválido\n");
            printf("        Tente outra vez :(\n\n");
        }
    }
    apaga();
    //De acordo com a opção abre a função correspondente//
    if(opcao_config==1) {
        zerar_ranking();
    }
    else if(opcao_config==2) {
        modo_de_dificuldade();
    }
    //Opção especial secreta para os monitores!//
    else if(opcao_config==0) {
        apaga();
        monitores();
        printf("        Tecle <enter> para continuar...");
        getchar();
        getchar();
        apaga();
        configuracoes();
    }
    else {
        apaga();
        menu_principal();
    }
}

//Função para zerar o ranking//
void zerar_ranking() {
    char resposta;
    desenho_tem_certeza();
    printf("        Você confirma reinicializar o ranking ? (S/N) ");
    scanf(" %c", &resposta);
    //Caso a resposta seja sim, a pontuação fica zerada e o arquivo fecha//
    if(resposta=='S' || resposta=='s') {
        fclose(ranking);
        dados_jogador.pontuacao = 0;
        printf("\n        O ranking foi zerado!\n");
    }
    printf("\n        Tecle <enter> para continuar...");
    getchar();
    getchar();
    apaga();
    configuracoes();
}

//Função que escolhe o modo de dificuldade//
void modo_de_dificuldade() {
    int opcao_modo;
    desenho_modo();
    printf("        1 - Iniciante\n");
    printf("        2 - Intermediário\n");
    printf("        3 - Avançado\n");
    printf("        4 - Retornar\n\n");
    //Caso o número digitado não seja uma opção o loop continua a pedir um número//
    while(1) {
        opcao_modo = 0;
        printf("        Digite a opção desejada: ");
        scanf("%d", &opcao_modo);
        //O loop é quebrado quando uma opção válida é digitada//
        if(opcao_modo>0 && opcao_modo<5) {
            break;
        }
        else {
            printf("\n        Esse é um número inválido\n");
            printf("        Tente outra vez :(\n\n");
        }
    }
    //De acordo com a opção digitada muda o arquivo sendo lido//
    if(opcao_modo==1) {
        modo_arquiv = 1;
        printf("\n        Configurado para modo INICIANTE!\n");
        printf("\n        Tecle <enter> para continuar...");
        getchar();
        getchar();
        apaga();
        configuracoes();
    }
    else if(opcao_modo==2) {
        modo_arquiv = 2;
        printf("\n        Configurado para modo INTERMEDIÁRIO!\n");
        printf("\n        Tecle <enter> para continuar...");
        getchar();
        getchar();
        apaga();
        configuracoes();
    }
    else if(opcao_modo==3) {
        modo_arquiv = 3;
        printf("\n        Configurado para modo AVANÇADO!\n");
        printf("\n        Tecle <enter> para continuar...");
        getchar();
        getchar();
        apaga();
        configuracoes();
    }
    else {
        apaga();
        configuracoes();
    }
}

//Caso o jogador zere o jogo completamente ele vira uma amiga//
void zerou() {
    amiga_fofa();
    printf("        Você zerou o jogo das somas!\n\n");
    printf("        Agora você é oficialmente uma amiga :)\n\n");
    printf("        Tecle <enter> para continuar...");
    getchar();
    apaga();
    menu_principal();
}

//Função com as explicações sobre o jogo, a tecla enter ou qualquer outra volta para o menu principal//
void instrucoes() {
    desenho_instrucoes();
    printf("\n\n");
    printf("        O jogo sempre começa com "VERMELHO"5"RESET" vidas. O objetivo do jogo é apagar os elementos das linhas e colunas de\n");
    printf("        modo que os elementos restantes na tela, uma vez somados são exatamente os valores mostrados no topo\n");
    printf("        das colunas e na frente das linhas. Para apagar um elemento o jogador deve informar a linha e a coluna\n");
    printf("        do número a ser apagado. No modo iniciante a matriz do jogo é 4x4, no modo intermediário a matriz é\n");
    printf("        6x6 e no modo avançado a matriz é 7x7. Para o jogador as linhas e colunas iniciam sempre em 1\n\n\n");
    printf("        Tecle <enter> para continuar...");
    getchar();
    getchar();
    apaga();
    desenho_boa_sorte();
    printf("        Tecle <enter> para continuar...");
    getchar();
    apaga();
    menu_principal();
}

//Função que printa o caracter 7 da tabela ascii que é o bell//
void som_de_errou() {
    char sino;
    sino = 7;
    printf("%c", sino);
}

//Função que incializa a main//
void inicializando_main() {
    //Abre os arquivos que vão ser usados no jogo//
    abre_arquivo_iniciante();
    abre_arquivo_intermediario();
    abre_arquivo_avancado();
    //Incializa a pontuação do jogador com 0//
    dados_jogador.pontuacao = 0;
}

int main () {
    inicializando_main();
    apaga();
    bem_vindo();
    menu_principal();
    return 0;
}