/**
@file logica.h
Definição da interface e das funções que a manipulam
*/

#ifndef SRC_LOGICA_H
#define SRC_LOGICA_H

/**
\brief Função que permite fazer jogadas, tendo em conta um estado e uma coordenada.
*/
int jogar(ESTADO *e, COORDENADA c);

/**
\brief Função que verifica se o jogador se pode movimentar para determinada casa com base na distãncia a que o jogador se encontra dela.
*/
int check_movimentos(ESTADO *estado,COORDENADA c);

/**
\brief Função que averigua se uma casa está livre.
*/
int casa_livre(ESTADO *e, COORDENADA c);

/**
\brief Função que averigua se uma jogada é valida.
*/
int jogada_valida(ESTADO *e, COORDENADA c);

#endif // SRC_LOGICA_H
