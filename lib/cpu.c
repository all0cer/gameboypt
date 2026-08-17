#include <cpu.h>


cpu_context ctx = {0};

void cpu_init() {

}

static void fetch_instruction() {
     
}

static void fetch_data() {

}

static void  execute() {


}

bool cpu_step() {

    if(!ctx.halted) {
        fetch_instruction();
        fetch_data();
        execute();
    }
    printf("Cpu not yet implemented.\n");
    return false;
}
