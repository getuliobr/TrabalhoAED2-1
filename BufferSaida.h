#pragma once
#include <stdint.h>

typedef struct ITEM_VENDA{
    uint32_t id;
    uint32_t id_venda;
    uint32_t data;
    float desconto;
    char obs[1008];
}ITEM_VENDA;

ITEM_VENDA* iv_Criar_S(char* arquivo, unsigned int N_registros);
void iv_Inserir(char* arqvivo, ITEM_VENDA* buffer, ITEM_VENDA registro);
void iv_Despejar(char* arquivo, ITEM_VENDA* buffer);
void iv_Destruir_S(char* arquivo, ITEM_VENDA* buffer);