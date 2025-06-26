#include <stdio.h> // Para entrada e saída de dados, como printf e fgets.
#include <string.h> // Para manipulação de strings, como fgets e strcspn.

int main() { // Início do programa Super Trunfo

    /*  Ola programador, seja muito bem vindo ao Super Trunfo!
        Este é um jogo de cartas onde você irá cadastrar
        duas cartas com informações sobre estados e cidades.
        As cartas serão exibidas e você poderá escolher
        qual carta deseja jogar. Vamos começar!
       
         Instruções: 
         1. Preencha os dados das cartas conforme solicitado.
            2. Certifique-se de que os dados estão corretos.
            3. As cartas serão exibidas para você comparar.
            4. Escolha a carta que deseja jogar.
            5. Boa sorte!
        
            Obs: Este é um exemplo básico de como o jogo pode ser estruturado.
            Você pode expandir este código para incluir mais cartas,
            regras de jogo, e lógica de comparação entre cartas.
            Divirta-se jogando Super Trunfo!
    */

////////////////////////////////////////////////// VARIÁVEIS DAS CARTAS 1 E 2: //////////////////////////////////////////////////

    char   estado[20];        //<---Adicione o nome dos estados.// 
    char   estado2[20];       ///////////////////////////////////
    char   cdgdacidade[5];    //<---Adicione o código das cidades com uma letra de 'A' a 'H' seguido de um numero de '1' a '4'.//
    char   cdgdacidade2[5];   //////////////////////////////////////////////////////////////////////////////////////////////////
    char   cidade[20];        //<---Adicione o nome das cidades.//
    char   cidade2[20];       ///////////////////////////////////
    float  poptotal;          //<---Adicione a população de cada cidade.//
    float  poptotal2;         ///////////////////////////////////////////
    float  area;              //<---Adicioce a área em km² de cada cidade.//
    float  area2;             /////////////////////////////////////////////
    float  pib;               //<---Adicione o PIB(produto interno bruto) de cada cidade.//
    float  pib2;              ////////////////////////////////////////////////////////////
    int    pontosturisticos;  //<---Adicione a quantidade de pontos turísticos de cada cidade.//
    int    pontosturisticos2; /////////////////////////////////////////////////////////////////
    
    // Variáveis adicionais:

    char nome[30];              //<---Variáveis para tornar o programa mais interativo.//
    char confirm[3];            ////////////////////////////////////////////////////////
    
////////////////////////////////////////////// LEITURA DE DADOS DAS CARTAS 1 E 2: //////////////////////////////////////////////
    
    // Carta 1:

    printf("Olá jogador, seja muito bem vindo ao Super Trunfo\n\nNos diga o seu nome: ");
    scanf("%s", nome);
    getchar(); // Limpa o buffer do teclado para evitar problemas com fgets depois.

    printf("\nMuito bem Sr.%s! :D\n\nVamos iniciar agora o cadastro das suas cartas!\n\nDigite abaixo os dados da 1ª carta:\n\n", nome);
    
    printf("Estado: ");
    fgets(estado, 20, stdin);
    estado[strcspn(estado, "\n")] = 0;
    
    printf("Código: ");
    fgets(cdgdacidade, 5, stdin);
    cdgdacidade[strcspn(cdgdacidade, "\n")] = 0;
   
    printf("Cidade: ");
    fgets(cidade, 20, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("População total: ");
    scanf("%f", &poptotal);
    getchar();

    printf("Área em km²: ");                     // Não é necessário adicionar 'km²' na entrada. //
    scanf("%f", &area);
    
    printf("PIB: ");                             // Não é necessário adicionar 'R$' na entrada. //
    scanf("%f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos);
    getchar(); 

    printf("\n\nÓtimo! agora confirme se os dados estão todos corretos:\n\n\n");
    
    printf(" ________CARTA 1________\n");
    printf("|                       |\n");
    printf("|Estado: %s", estado);
    printf("\n|Código: %s", cdgdacidade);
    printf("\n|Cidade: %s", cidade);
    printf("\n|População total: %.3f", poptotal);
    printf("\n|Área: %.3fkm²", area);
    printf("\n|PIB: R$%.3f", pib);
    printf("\n|Pontos turísticos: %d  |\n", pontosturisticos);
    printf("|_______________________|\n\n");
    
    printf("Digite 'OK' para continuar se estiver tudo certo: ");
    fgets(confirm, 3, stdin);
    getchar();

    // Carta 2:
    
    printf("\n\nMuito bem! Agora vamos cadastrar a 2ª carta:\n\n");
    
    printf("Estado: ");
    fgets(estado2, 20, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Código: ");
    fgets(cdgdacidade2, 5, stdin);
    cdgdacidade2[strcspn(cdgdacidade2, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("População total: ");
    scanf("%f", &poptotal2);

    printf("Área em km²: ");                     // Não é necessário adicionar 'km²' na entrada. //
    scanf("%f", &area2);

    printf("PIB: ");                             // Não é necessário adicionar 'R$' na entrada. //
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    getchar(); 

    printf("\n\nÓtimo! agora confirme se os dados estão todos corretos:\n\n\n");
    
    printf(" ________CARTA 2________\n");
    printf("|                       |\n");
    printf("|Estado: %s", estado2);
    printf("\n|Código: %s", cdgdacidade2);
    printf("\n|Cidade: %s", cidade2);
    printf("\n|População total: %.3f", poptotal2);
    printf("\n|Área: %.3fkm²", area2);
    printf("\n|PIB: R$%.3f", pib2);
    printf("\n|Pontos turísticos: %d  |\n", pontosturisticos2);
    printf("|_______________________|\n\n");
    
    printf("Digite 'OK' para continuar se estiver tudo certo: ");
    fgets(confirm, 3, stdin);

////////////////////////////////////////////////// EXIBIÇÃO DAS CARTAS 1 E 2: //////////////////////////////////////////////////

    printf("\n\nMuito bem! As cartas foram cadastradas com sucesso!\n\n");
    printf("Vamos exibi-las novamente para voce comparar:\n\n");

    printf(" ________CARTA 1________\n");
    printf("|                       |\n");
    printf("|Estado: %s", estado);
    printf("\n|Código: %s", cdgdacidade);
    printf("\n|Cidade: %s", cidade);
    printf("\n|População total: %.3f", poptotal);
    printf("\n|Área: %.3fkm²", area);
    printf("\n|PIB: R$%.3f", pib);
    printf("\n|Pontos turísticos: %d  |\n", pontosturisticos);
    printf("|_______________________|\n\n\n");

    printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");

    printf(" ________CARTA 2________\n");
    printf("|                       |\n");
    printf("|Estado: %s", estado2);
    printf("\n|Código: %s", cdgdacidade2);
    printf("\n|Cidade: %s", cidade2);
    printf("\n|População total: %.3f", poptotal2);
    printf("\n|Área: %.3fkm²", area2);
    printf("\n|PIB: R$%.3f", pib2);
    printf("\n|Pontos turísticos: %d  |\n", pontosturisticos2);
    printf("|_______________________|\n\n");

    printf("\n\nMuito bem! As cartas foram exibidas com sucesso!\n\n");
    printf("Agora é com você, escolha a carta que deseja jogar!\n\n");
    printf("Boa sorte, %s!\n\n\n\n\n", nome);
    
    return 0;

}