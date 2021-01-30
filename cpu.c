#include <stdio.h>
#include <stdint.h>

// fully stolen from:https://github.com/cookerlyk/Chip8/blob/master/src/chip8_t.h#L54
typedef struct Chip8{
	uint8_t ram[4096];
	uint16_t stack_ptr; //      <-- stack pointer
	uint16_t pc_register; //    <-- pc register
	uint16_t index_register; // <-- index register
	uint16_t stack[16]; // <-- the stack
	uint16_t curr_op;
};

void ret_sub(struct Chip8* c) {
	c->stack_ptr--;
	c->pc_register = c->stack[c->stack_ptr];
	c->pc_register += 2;
}
int main() {
	//
	return 0;
}
