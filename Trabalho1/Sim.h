#define MEM_SIZE 4096
void load_mem(char* arquivo, int32_t address);
int32_t lw(uint32_t address, int16_t kte);
int32_t lh(uint32_t address, int16_t kte);
int32_t lb(uint32_t adress, int16_t kte);
void sw(uint32_t address, int16_t kte, int32_t dado);
void sh(uint32_t address, int16_t kte, int16_t dado);
void sb(uint32_t address, int16_t kte, int8_t dado);
int32_t mem[MEM_SIZE];