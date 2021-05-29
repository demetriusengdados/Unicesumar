#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

Struct votos

{
    Char*nome;
    Int votos;
    }candidato[7] = {    {“Vereador João do Frete”,    0},
                        {“Vereador Maria da Pamonha”, 0},
                        {“Vereador Ze da Farmacia”,   0},
                        {“Voto Nulo Vereador”,        0},
                        {“Prefeito Dr. Zureta”,       0},
                        {“Prefeito Senhor Gomes”,     0},
                        {“Voto Nulo Prefeito”,        0},
                          };

    Void menu();
    Void votar();
    Void apuracao();

    Int main(int argc, char const *argv[]){
        Menu();
        Return 0;
    }
    Void menu (){
        Setlocale(LC_ALL, “Portuguese”);
        Int op;
        Do{
            System(“cls”);
            Printf(“\n------ PESQUISA ELEITORAL ------\n- TECLE UMA DAS OPÇÕES ABAIXO -\n”);
            Printf(“\n 1 – VOTAR\n 2 – APURAÇÃO DE VOTOS\n 3 – SAIR\n”);
            Scanf(“%d”, &op);

                Switch(op){

                    Case 1:
                        Votar();
                    Break;
                    Case 2:
                        Apuracao();
                    Break;
                    Case 3:
                        System(“exit”);
                    Break;
                    Default:
                        Printf(“\nOpcao invalida!\n”);
                        System(“pause”);
                    Break;
                    Getchar();
                    Getchar();
            }
        }while(op!=3);
    }
    Void votar()
    {    system(“cls”);
        Int i, op;
        Char cont;
        Do{
            System(“cls”);
            Printf(“\n---- PESQUISA ELEITORAL ----\n”);
            Printf(“Digite o numero do vereador: “);
            Scanf(“%d”, &op);
            Fflush(stdin);
            If(op == 111){
                Printf(“\nVereador João do Frete\n”);
                    Candidato[0].votos++;
               }else if (op == 222){
                    Printf(“\nVereador Maria da Pamonha\n”);
                    Candidato[1].votos++;
                }else if (op == 333){
                    Printf(“\nVereador Ze da Farmacia\n”);
                    Candidato[2].votos++;
                }else if (op == 444){
                    Printf(“\nVoto Nulo\n”);
                    Candidato[3].votos++;
                    }else if (op != 111, 222){
                        Printf(“\nVoto invalidado!\n”);
                        Candidato[3].votos++;}
            System(“pause”);
            System(“cls”);
            Printf(“\n---- PESQUISA ELEITORAL ----\n”);
            Printf(“Digite o numero do prefeito: “);
            Scanf(“%d”, &op);
            Fflush(stdin);
            If(op == 11){
                Printf(“\nPrefeito Dr. Zureta\n”);
                    Candidato[4].votos++;
               }else if (op == 22){
                    Printf(“\nPrefeito Senhor Gomes\n”);
                    Candidato[5].votos++;
                }else if (op == 33){
                    Printf(“\nVoto Nulo\n”);
                    Candidato[6].votos++;
                    }else if (op != 11, 22){
                        Printf(“\nVoto invalidado!\n”);
                        Candidato[6].votos++;
                    Getchar();
                    Getchar();
                }
            Printf(“Continua? s/n\n”);
            Scanf(“%c”, &cont);
        }while(cont != ‘n’);
    }
    Void apuracao()
    {
        System(“cls”);
        Int i;
        Printf(“\n-------- PESQUISA ELEITORAL --------\n”);
        For (i = 0; i < 7; i++)
            Printf(“\n%s teve: %d votos\n”, candidato[i].nome, candidato[i].votos);
        System(“pause”);
    }


}
